/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:25:56 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/27 20:18:23 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

static char	**add_str_in_arr(char const *str, char c,
							char **arr_strs, int words)
{
	int	i;
	int	word_lenght;
	int	arr_index;

	i = 0;
	arr_index = 0;
	while (arr_index < words)
	{
		while (str[i] && str[i] == c)
			i++;
		word_lenght = 0;
		while (str[i + word_lenght] && str[i + word_lenght] != c)
			word_lenght++;
		arr_strs[arr_index] = (char *)malloc(sizeof(char) * (word_lenght + 1));
		if (!arr_strs[arr_index])
			return (NULL);
		word_lenght = 0;
		while (str[i] && str[i] != c)
			arr_strs[arr_index][word_lenght++] = str[i++];
		arr_strs[arr_index++][word_lenght] = 0;
	}
	arr_strs[arr_index] = 0;
	return (arr_strs);
}

char		**ft_split(char const *str, char c)
{
	char	**arr_strs;
	int		words;

	words = word_count(str, c);
	arr_strs = (char **)malloc(sizeof(char*) * (words + 1));
	if (!arr_strs)
		return (NULL);
	add_str_in_arr(str, c, arr_strs, words);
	return (arr_strs);
}
