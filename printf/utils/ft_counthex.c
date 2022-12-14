/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:09:33 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 11:41:27 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_counthex(long long ptr, int count)
{
	if (ptr)
		count += ft_counthex(ptr / 16, 1);
	return (count);
}
