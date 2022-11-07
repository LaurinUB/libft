/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:32:47 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/05 14:43:41 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_nblen(long i)
{
	int	len;

	len = 0;
	if (i == 0)
		len++;
	while (i)
	{
		i /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		n += '0';
		write(1, &n, 1);
	}
}

int	ft_print_udec(va_list arg)
{
	unsigned int	nbr;
	unsigned int	size;

	nbr = va_arg(arg, unsigned int);
	size = ft_nblen(nbr);
	ft_putnbr(nbr);
	return (size);
}
