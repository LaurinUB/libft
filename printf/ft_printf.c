/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:28:17 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/07 10:55:25 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list arg, const char *fmt, int i)
{
	int	count;

	count = 0;
	if (fmt[i] == 's')
		count += ft_print_str(arg);
	else if (fmt[i] == 'c')
		count += ft_print_chr(arg);
	else if (fmt[i] == 'p')
		count += ft_print_ptr(arg);
	else if (fmt[i] == 'd')
		count += ft_print_dec(arg);
	else if (fmt[i] == 'i')
		count += ft_print_dec(arg);
	else if (fmt[i] == 'u')
		count += ft_print_udec(arg);
	else if (fmt[i] == 'x')
		count += ft_print_x(arg);
	else if (fmt[i] == 'X')
		count += ft_print_bigx(arg);
	else if (fmt[i] == '%')
		count += write(1, "%", 1);
	else if (fmt[i] == '\0')
		write(1, "", 1);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		total;
	va_list	args;

	va_start(args, fmt);
	i = 0;
	total = 0;
	while (fmt && fmt[i])
	{
		if (fmt[i] != '%')
			total += write(1, &fmt[i], 1);
		else
		{
			total += ft_parse(args, fmt, i + 1);
			i++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
