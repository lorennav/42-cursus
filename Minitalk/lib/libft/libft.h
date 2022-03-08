/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:23:10 by lvieira           #+#    #+#             */
/*   Updated: 2021/12/15 18:27:14 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
size_t		ft_strlen(const char *str);
void			ft_putstr_fd(char *s, int fd);
int				ft_atoi(const char *str);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strdup(const char *s1);

#endif
