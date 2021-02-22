/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:27:48 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/22 19:58:24 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	src_i;

	index = ft_strlen(dst);
	src_i = 0;
	while (src[src_i] && index < dstsize - 1 && dstsize != 0)
	{
		dst[index] = src[src_i];
		index++;
		src_i++;
	}
	if (dstsize != 0)
		dst[index] = '\0';
	while (src[src_i])
	{
		index++;
		src_i++;
	}
	if (dstsize < ft_strlen(dst))
		return (dstsize + src_i);
	return (index);
}
