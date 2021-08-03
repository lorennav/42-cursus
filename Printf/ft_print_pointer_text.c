/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer_text.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:57:20 by lvieira           #+#    #+#             */
/*   Updated: 2021/08/03 22:46:26 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_s(va_list *args, t_format *format)
{
	char	*s;

	s = va_arg(*args, char *);
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, 1);
	format->length += ft_strlen(s);
}

void	print_c(va_list *args, t_format *format)
{
	char	c;

	c = va_arg(*args, int);
	ft_putchar(c);
	format->length += 1;
}

void	print_pointer(va_list *args, t_format *format)
{
	unsigned long	pointer;

	pointer = va_arg(*args, unsigned long);
	if (pointer == 0)
		format->length += write(1, "0x0", 3);
	else if (pointer != 0)
	{
		format->length += write(1, "0x", 2);
		format->length += ft_putnbr_base(pointer, "0123456789abcdef");
	}
}

int	print_fmt_chars(char c, t_format *format)
{
	ft_putchar(c);
	format->length += 1;
	return (1);
}
