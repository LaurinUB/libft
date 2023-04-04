/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespcs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:41:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/04/04 12:42:08 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_length(const char *s, size_t i)
{
	size_t	count;

	count = 0;
	while (!ft_iswhitespcs(s[i]) && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_fillstr(char const *s, size_t i)
{
	char	*stl;
	size_t	k;
	size_t	t;

	k = 0;
	t = ft_word_length(s, i);
	stl = ft_calloc(t + 1, sizeof(char));
	if (!stl)
		return (NULL);
	while (!ft_iswhitespcs(s[i]) && s[i])
	{
		stl[k] = s[i];
		k++;
		i++;
	}
	return (stl);
}

static int	ft_count_words(const char *str)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (!ft_iswhitespcs(*str) && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (ft_iswhitespcs(*str))
			trigger = 0;
		str++;
	}
	return (i);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split_whitespcs(char const *s)
{
	size_t	i;
	size_t	j;
	char	**str;

	if (!s)
		return (NULL);
	str = ft_calloc(ft_count_words(s) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (ft_iswhitespcs(s[i]))
			i++;
		if (!ft_iswhitespcs(s[i]) && s[i])
		{
			str[j] = ft_fillstr(s, i);
			if (!str[j])
				return (ft_free(str));
			i += ft_strlen(str[j]);
		}
		j++;
	}
	return (str);
}
