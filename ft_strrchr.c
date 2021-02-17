/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:25:12 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/17 20:08:05 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int times;

	i = 0;
	times = 0;
	if ((char)c == '\0')
		return ((char *)s + (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			times = i;
		i++;
	}
	if (times == 0)
		return (0);
	else
		return ((char *)s + times);
}
