/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:56:40 by lvieira           #+#    #+#             */
/*   Updated: 2022/03/08 22:41:43 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
int	binary_to_ascii_number(int *char_in_binary)
{
	u_int8_t	char_in_decimal;
	u_int8_t	ascii_number;
	u_int8_t	index;

	char_in_decimal = 0;
	ascii_number = 128;
	index = 0;
	while (index < TOTAL_BITS)
	{
		if (char_in_binary[index] == 1)
			char_in_decimal += ascii_number;
		ascii_number /= 2;
		index++;
	}
	return (char_in_decimal);
}

static void	handle_sigusr(int signum, siginfo_t *info, void *context)
{
	static t_static_array	save_chars;
	u_int8_t				signal_identifier;
	u_int8_t				char_in_decimal;

	(void)context;
	if (signum == SIGUSR1)
		signal_identifier = 0;
	else if (signum == SIGUSR2)
		signal_identifier = 1;
	if (save_chars.index < TOTAL_BITS)
	{
		save_chars.storage[save_chars.index] = signal_identifier;
		save_chars.index++;
	}
	if (save_chars.index == TOTAL_BITS)
	{
		char_in_decimal = binary_to_ascii_number(save_chars.storage);
		write(1, &char_in_decimal, 1);
		if (char_in_decimal == '\0')
		{
			ft_putchar('\n');
			kill(info->si_pid, SIGUSR1);
		}
		save_chars.index = 0;
	}
}

int	main(void)
{
	struct sigaction	sigact;
	pid_t				pid;

	pid = getpid();
	sigact.sa_sigaction = handle_sigusr;
	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);
	sigemptyset(&(sigact.sa_mask));
	sigaddset(&(sigact.sa_mask), SIGUSR1);
	sigaddset(&(sigact.sa_mask), SIGUSR2);
	sigact.sa_flags = SA_SIGINFO;
	ft_putstr_fd("Welcome to minitalk! Here is your PID: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
	return (0);
}
