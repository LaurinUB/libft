/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:32:43 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/05 14:43:57 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_ptrlen(uintptr_t ptr, int count)
{
	if (ptr)
		count += ft_ptrlen(ptr / 16, 1);
	return (count);
}

static void	ft_putptr(uintptr_t ptr)
{
	if (ptr)
	{
		ft_putptr(ptr / 16);
		if (ptr % 16 >= 10)
			ft_putchar_fd((ptr % 16) - 10 + 'a', 1);
		else
			ft_putchar_fd((ptr % 16) + '0', 1);
	}
}

int	ft_print_ptr(va_list arg)
{
	int					size;
	unsigned long long	ptr;

	ptr = va_arg(arg, unsigned long long);
	size = 0;
	size += write(1, "0x", 2);
	if (ptr == 0)
		size += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		size += ft_ptrlen(ptr, 0);
	}
	return (size);
}
