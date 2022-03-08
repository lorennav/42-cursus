/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:56:42 by lvieira           #+#    #+#             */
/*   Updated: 2022/03/08 22:57:00 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	server_sig_handler(int signum, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;
	if (signum == SIGUSR1)
	{
		ft_putstr_fd("Message was sent!\n", 1);
		exit(0);
	}
}

int	send_in_binary(int *byte_storage, int pid)
{
	int	result;
	int	index;

	result = 0;
	index = 0;
	while (index < TOTAL_BITS)
	{
		if (byte_storage[index] == 0)
		{
			result = kill(pid, SIGUSR1);
		}
		else
			result = kill(pid, SIGUSR2);
		usleep(100);
		index++;
	}
	return (result);
}

void	send_message(int *byte_storage, unsigned char letter, int pid)
{
	int	ascii_set;
	int	index;

	ascii_set = 128;
	index = 0;
	while (index < TOTAL_BITS)
	{
		if (letter / ascii_set)
			byte_storage[index] = 1;
		else
			byte_storage[index] = 0;
		letter %= ascii_set;
		ascii_set /= 2;
		index++;
	}
	if (send_in_binary(byte_storage, pid) == -1)
	{
		ft_putstr_fd("There was an error sending the message. Try again.\n", 1);
	}
}

void	iterate_over_argv(char *str, int server_pid)
{
	int					byte_storage[8];

	while (*str)
	{
		send_message(byte_storage, *str, server_pid);
		str++;
	}
	send_message(byte_storage, '\0', server_pid);
	sleep(5);
}

int	main(int argc, char *argv[])
{
	int					server_pid;
	char				*str;
	struct sigaction	sigact;

	if (argc != 3)
	{
		ft_putstr_fd("Wrong number of arguments. Please try again.\n", 1);
		ft_putstr_fd("To use the program, write [SERVER PID][MESSAGE].\n", 1);
		return (EXIT_FAILURE);
	}
	str = argv[2];
	sigact.sa_sigaction = server_sig_handler;
	sigaction(SIGUSR1, &sigact, NULL);
	sigemptyset(&sigact.sa_mask);
	sigaddset(&sigact.sa_mask, SIGUSR1);
	sigact.sa_flags = SA_SIGINFO;
	server_pid = ft_atoi(argv[1]);
	iterate_over_argv(str, server_pid);
	return (0);
}
