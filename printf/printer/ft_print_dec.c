/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:32:34 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/05 14:43:28 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_nblen(long i)
{
	int	len;

	len = 0;
	if (i < 0)
	{
		i = i * -1;
		len++;
	}
	if (i == 0)
		len++;
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

int	ft_print_dec(va_list arg)
{
	int	nbr;
	int	size;

	nbr = va_arg(arg, int);
	size = ft_nblen(nbr);
	ft_putnbr_fd(nbr, 1);
	return (size);
}
