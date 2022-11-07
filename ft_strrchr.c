/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:30:02 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 18:22:20 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	char			*p;

	p = 0;
	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			p = (char *)s;
		s++;
	}
	if (cc == '\0')
		p = (char *)s;
	return (p);
}
