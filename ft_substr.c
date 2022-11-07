/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:35:54 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/24 10:27:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;
	size_t			slen;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	dst = ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		dst[i] = s[i];
		start++;
		i++;
	}
	return (dst);
}
