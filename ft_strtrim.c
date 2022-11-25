/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:14:27 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/25 13:57:16 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispartofstr(const char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

static char	*ft_fill(size_t start, size_t end, char *new, char *old)
{
	size_t	n;

	n = 0;
	while (start <= end)
	{
		new[n] = old[start];
		start++;
		n++;
	}
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	char	*trimmed;

	if (!s1 || !*s1)
	{
		trimmed = ft_calloc(1, sizeof(char));
		return (trimmed);
	}
	s1len = ft_strlen(s1);
	i = 0;
	j = s1len - 1;
	while (ft_ispartofstr(s1[i], set) && s1[i])
		i++;
	while (ft_ispartofstr(s1[j], set) && s1[i] && i < j)
		j--;
	trimmed = ft_calloc(j + 2 - i, sizeof(char));
	if (!trimmed)
		return (NULL);
	return (ft_fill(i, j, trimmed, (char *)s1));
}
