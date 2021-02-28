/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:07:33 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/26 21:24:55 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(long number)
{
	int		size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		size++;
	while (number != 0)
	{
		size++;
		number /= 10;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	number;
	int		size;

	number = n;
	size = number_size(number);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	if (number == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		str[size - 1] = number % 10 + '0';
		size--;
		number /= 10;
	}
	str[number_size((long)n)] = '\0';
	return (str);
}
