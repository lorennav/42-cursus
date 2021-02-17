/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:00:13 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/17 16:49:11 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char*)s1;
	s2_cpy = (unsigned char*)s2;
	if (s1_cpy == s2_cpy)
		return (0);
	while (n > 0)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		n--;
		s1_cpy++;
		s2_cpy++;
	}
	return (0);
}
