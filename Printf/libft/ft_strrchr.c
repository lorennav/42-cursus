/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:25:12 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/27 20:13:25 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	if ((char)c == '\0')
		return ((char *)s + (ft_strlen(s)));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)s + i;
		i++;
	}
	return (res);
}
