/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:51:30 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/16 22:36:49 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dst_cpy;

	src_cpy = (unsigned char*)src;
	dst_cpy = (unsigned char*)dst;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*dst_cpy++ = *src_cpy++;
		n--;
	}
	return (dst);
}
