/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bigx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:32:28 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/05 14:43:24 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_bigx(va_list arg)
{
	long	i;
	int		count;

	i = va_arg(arg, unsigned int);
	if (i == 0)
		return (write(1, "0", 1));
	count = ft_counthex(i, 0);
	ft_puthex(i, 1);
	return (count);
}
