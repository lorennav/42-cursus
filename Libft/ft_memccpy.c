/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:20:01 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 18:18:05 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	index;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	index = 0;
	while (index < n)
	{
		dst_cpy[index] = src_cpy[index];
		if ((unsigned char)src_cpy[index] == (unsigned char)c)
			return ((char *)dst + index + 1);
		index++;
	}
	return (0);
}
