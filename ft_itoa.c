/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:52:34 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/20 15:33:25 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	long	nb;

	nb = n;
	i = ft_nblen(nb);
	new = ft_calloc((i + 1), sizeof(char));
	if (!new)
		return (NULL);
	if (nb == 0)
		new[0] = '0';
	if (nb < 0)
	{
		new[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		new[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (new);
}
