/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:31:13 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/18 19:29:40 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		new_str_index;
	int		str_size;
	char	*new_str;

	i = 0;
	new_str_index = 0;
	str_size = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(str_size + 1);
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
		new_str[new_str_index] = s2[i];
		i++;
		new_str_index++;
	}
	return (new_str);
}
