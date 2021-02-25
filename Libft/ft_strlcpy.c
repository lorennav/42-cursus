/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:50:02 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 22:52:08 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (!src)
		return (0);
	if (dstsize != 0)
	{
		while (src[index] != '\0' && dstsize > 1)
		{
			dst[index] = src[index];
			dstsize--;
			index++;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(src));
}
