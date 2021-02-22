/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:33:07 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/18 19:29:14 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_cpy;
	unsigned char	*dst_cpy;

	src_cpy = (unsigned char*)src;
	dst_cpy = (unsigned char*)dst;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len-- > 0)
		{
			dst_cpy[len] = src_cpy[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*dst_cpy++ = *src_cpy++;
			len--;
		}
	}
	return (dst);
}
