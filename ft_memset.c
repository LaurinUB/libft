/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:34:35 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 18:25:18 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	cc;

	i = 0;
	if (!b)
		return (NULL);
	cc = (unsigned char)c;
	while (i < len)
	{
		((unsigned char *)b)[i] = cc;
		i++;
	}
	return (b);
}
