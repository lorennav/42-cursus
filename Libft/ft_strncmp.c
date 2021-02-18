/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:47:53 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/12 23:28:49 by lvieira          ###   ########.fr       */
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
	 return (*(unsigned char*) str1 - *(unsigned char*) str2);
}
