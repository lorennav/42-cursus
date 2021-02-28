/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:08:25 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/27 20:14:56 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
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
	int		start;
	int		end;
	char	*strtrim;
	int		i;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > 0 && in_set(s1[end], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	strtrim = (char *)malloc(sizeof(char) * (end - start + 2));
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
