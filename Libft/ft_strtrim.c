/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:08:25 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 00:03:27 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	in_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strtrim;
	size_t	i;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && in_set(set, s1[start]))
		start++;
	while (end > 0 && in_set(set, s1[end]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	strtrim = (char *)malloc(sizeof(char*) * (end - start + 2));
	if (!strtrim)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		strtrim[i] = s1[start + i];
		i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}
