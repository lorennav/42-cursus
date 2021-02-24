/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:25:56 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 16:24:11 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// verificar se char esta presente
// quando achar o char cortar a palavra
// saber quantas palavras tem para alocar espaco
// guardar a palavra numa array
// retornar a array de strs

int is_char_present(char const *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return(1);
        s++;
    }
    return(0);
}

int word_count(char const *s, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;

    if (*s != c)
    {
        words++;
        while (*s)
        {
            if (*s == c && 
            {
                words++;
            }    
            s++;
        }
    }
}






char **ft_split(char const *s, char c)
{
    
}