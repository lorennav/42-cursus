/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:55:40 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/15 22:37:52 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *find_in, const char *to_find, size_t lenght)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char*)find_in);
	while (find_in[i] && (i < lenght))
	{
		j = 0;
		while ((find_in[i + j] == to_find[j])
			&& (j < lenght) && to_find[j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return ((char*)(&find_in[i]));
		}
		i++;
	}
	return (0);
}
