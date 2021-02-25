/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:07:10 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/25 23:57:07 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (s[start] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
