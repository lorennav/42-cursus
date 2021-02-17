/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:50:02 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/17 17:51:12 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
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
