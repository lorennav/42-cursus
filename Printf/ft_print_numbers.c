/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:54:54 by lvieira           #+#    #+#             */
/*   Updated: 2021/07/29 20:01:37 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_di(va_list *args, t_format *format)
{
	int	n;

	n = va_arg(*args, int);
	ft_putnbr_fd(n, 1);
	format->length += get_len(n);
}

void	print_x(va_list *args, t_format *format)
{
	unsigned int	n;

	n = va_arg(*args, unsigned int);
	format->length += ft_putnbr_base(n, "0123456789abcdef");
}

void	print_X(va_list *args, t_format *format)
{
	unsigned int	n;

	n = va_arg(*args, unsigned int);
	format->length += ft_putnbr_base(n, "0123456789ABCDEF");
}

void	print_u(va_list *args, t_format *format)
{
	unsigned long long int	n;

	n = (unsigned long long int)va_arg(*args, unsigned int);
	format->length += ft_putnbr_base(n, "0123456789");
}
