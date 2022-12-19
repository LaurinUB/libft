/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:25:14 by luntiet-          #+#    #+#             */
/*   Updated: 2022/12/19 20:42:56 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;
	int				i;

	cc = (unsigned char)c;
	i = 0;
	if (!s)
		return (NULL);
	if (cc == '\0')
		return ((char *)s);
	while (*s)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
