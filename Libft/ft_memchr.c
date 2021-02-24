/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:40:03 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 19:54:01 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*s_cpy;

	index = 0;
	s_cpy = (char *)s;
	while (index < n)
	{
		if ((unsigned char)s_cpy[index] == (unsigned char)c)
		{
			return ((void *)s + index);
		}
		index++;
	}
	return (0);
}
