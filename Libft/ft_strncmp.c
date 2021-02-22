/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:47:53 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/18 19:26:20 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0 && *str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	return (*(unsigned char*)str1 - *(unsigned char*)str2);
}
