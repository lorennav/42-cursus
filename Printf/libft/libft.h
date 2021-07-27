/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:23:10 by lvieira           #+#    #+#             */
/*   Updated: 2021/07/26 20:23:01 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			ft_putchar(char c);
size_t	ft_strlen(const char *str);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
void			ft_bzero(void *s, size_t n);
char			*ft_strrchr(const char *s, int c);
void			ft_putstr_fd(char *s, int fd);
void			*ft_calloc(size_t count, size_t size);
void			ft_putnbr_fd(int n, int fd);
int				ft_putnbr_base(unsigned long n, char *base);



#endif
