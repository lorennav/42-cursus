/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:31:32 by lvieira           #+#    #+#             */
/*   Updated: 2021/07/28 00:11:50 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"

# define TYPES "cspdiuxX"
typedef struct s_format {
	int length;
	char type;
	int	valid;
	int index;

}		t_format;


int		ft_printf(const char *format, ...);
void print_s(va_list *args, t_format *format);
void print_c(va_list *args, t_format *format);
void print_pointer(va_list *args, t_format *format);
void print_di(va_list *args, t_format *format);
void print_x(va_list *args, t_format *format);
void print_X(va_list *args, t_format *format);
void print_u(va_list *args, t_format *format);
int	get_len(int nbr);
int print_fmt_chars(char c, t_format *format);

#endif