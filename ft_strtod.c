/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:53:03 by luntiet-          #+#    #+#             */
/*   Updated: 2023/03/29 17:53:20 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_strtod(char *str)
{
	char	**split;
	double	pre;
	double	post;
	double	res;

	if (!ft_strchr(str, '.'))
		return ((double)ft_atoi(str));
	split = ft_split(str, '.');
	pre = (double)ft_atoi(split[0]);
	post = (double)ft_atoi(split[1]);
	res = pre + (post / pow(ft_strlen(split[1]), 10));
	ft_free_stra(split);
	return (res);
}
