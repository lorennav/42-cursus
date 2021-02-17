/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:40:03 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/16 23:09:02 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*s_cpy;

	index = 0;
	s_cpy = (char *)s;
	while (s_cpy[index] && n > 0)
	{
		if ((unsigned char)s_cpy[index] == (unsigned char)c)
		{
			return ((char *)s + index);
		}
		index++;
		n--;
	}
	return (0);
}
