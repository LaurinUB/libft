/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:35:11 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 18:25:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\r' \
		|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = 10 * n + (*str - '0');
		str++;
	}
	return ((int)n * sign);
}
