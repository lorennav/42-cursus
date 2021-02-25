/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:31:13 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/25 23:58:39 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
