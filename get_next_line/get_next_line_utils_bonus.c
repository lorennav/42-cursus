/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:17:53 by lvieira           #+#    #+#             */
/*   Updated: 2021/04/14 22:11:06 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	lenght;

	lenght = 0;
	while (str[lenght])
	{
		lenght++;
	}
	return (lenght);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = 0;
	if (!s1)
		return (0);
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		new_str_index;
	char	*new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	new_str_index = 0;
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[new_str_index] = s1[i];
		new_str_index++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new_str[new_str_index + i] = s2[i];
		i++;
	}
	new_str[new_str_index + i] = '\0';
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lenght;

	lenght = ft_strlen(s);
	i = 0;
	if (start >= lenght)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		substr[0] = 0;
		return (substr);
	}
	if (lenght - start < len)
		substr = (char *)malloc(sizeof(char) * (lenght - start + 1));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (start + i < lenght && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
