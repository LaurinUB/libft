/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:07:56 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/07 11:29:48 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_puthex(long long ptr, int istoupper)
{
	if (ptr && istoupper == 0)
	{
		ft_puthex(ptr / 16, istoupper);
		if (ptr % 16 >= 10)
			ft_putchar_fd((ptr % 16) - 10 + 'a', 1);
		else
			ft_putchar_fd((ptr % 16) + '0', 1);
	}
	else if (ptr && istoupper == 1)
	{
		ft_puthex(ptr / 16, istoupper);
		if (ptr % 16 >= 10)
			ft_putchar_fd((ptr % 16) - 10 + 'A', 1);
		else
			ft_putchar_fd((ptr % 16) + '0', 1);
	}
}
