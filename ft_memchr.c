/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:35:01 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 18:17:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	if (s)
	{
		str = (unsigned char *)s;
		while (n > 0)
		{
			if (*str == (unsigned char)c)
				return ((void *)str);
			str++;
			n--;
		}
	}
	return (NULL);
}
