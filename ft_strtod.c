/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:53:03 by luntiet-          #+#    #+#             */
/*   Updated: 2023/04/21 11:36:03 by luntiet-         ###   ########.fr       */
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
	pre = fabs((double)ft_atoi(split[0]));
	post = fabs((double)ft_atoi(split[1]));
	res = pre + (post / pow(10, ft_strlen(split[1])));
	if (str[0] == '-')
		res = -res;
	ft_free_stra(split);
	return (res);
}
