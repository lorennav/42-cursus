/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:11:04 by lvieira           #+#    #+#             */
/*   Updated: 2021/07/28 00:32:12 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	initialize_format(t_format *format)
{
	format->length = 0;
	format->type = 0;
	format->valid = 0;
	format->index = 0;
}

static void	fetch_type(char c, t_format *format)
{
	int	i;

	i = 0;
	while (TYPES[i])
	{
		if (ft_strchr(TYPES, c))
		{
			format->type = c;
			format->valid = 1;
			break ;
		}
		format->valid = 0;
		i++;
	}
}

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	print_types(va_list *args, t_format *format)
{
	if (format->type == 's')
		print_s(args, format);
	else if (format->type == 'd' || format->type == 'i')
		print_di(args, format);
	else if (format->type == 'c')
		print_c(args, format);
	else if (format->type == 'p' )
		print_pointer(args, format);
	else if (format->type == 'x' )
		print_x(args, format);
	else if (format->type == 'X' )
		print_X(args, format);
	else if (format->type == 'u' )
		print_u(args, format);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_format	format;

	va_start(args, str);
	initialize_format(&format);
	while (str[format.index] != '\0')
	{
		if (str[format.index] == '%')
		{
			format.index++;
			if (str[format.index] == '%')
				format.index += print_fmt_chars(str[format.index], &format);
			else
			{
				fetch_type(str[format.index], &format);
				if (format.valid == 1)
					format.index += print_types(&args, &format);
			}
		}
		else
			format.index += print_fmt_chars(str[format.index], &format);
	}
	va_end(args);
	return (format.length);
}
