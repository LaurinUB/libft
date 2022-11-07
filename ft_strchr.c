/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:25:14 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/20 10:37:15 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (0);
}
