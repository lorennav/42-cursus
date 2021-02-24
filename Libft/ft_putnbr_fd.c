/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:26:08 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 17:01:54 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = -x;
	}
	if (n / 10)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd(x % 10 + '0', fd);
}
