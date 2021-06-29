/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:11:04 by lvieira           #+#    #+#             */
/*   Updated: 2021/06/29 19:07:29 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int i;

    va_start(args, str);

    i = 0;
    while (str[i])
    {
        if (ft_strchr(str, '%'))
        {
            if (str[i + 1] == 's')
            {
                ft_putstr_fd(va_arg(args, char *), 1);
                i++;
            }
            else if (str[i + 1] == 'd')
            {
                ft_putnbr_fd(va_arg(args, int), 1);
                i++;
            }
        }
        i++;
    }

    va_end(args);
    return (0);
}

int main(void)
{
    char *str = "Hello World";
    int no = 42;

    printf("%d\n", no);
    ft_printf("%d\n", no);
    printf("%s\n", str);
    ft_printf("%s\n", str);

    return (0);

}

