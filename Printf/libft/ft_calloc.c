/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:07:42 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 17:56:18 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	memory;
	void	*ptr;

	memory = count * size;
	ptr = malloc(memory);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, memory);
	return (ptr);
}
