/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stra_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:52:20 by luntiet-          #+#    #+#             */
/*   Updated: 2023/03/29 17:52:35 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_stra_len(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i] != NULL)
		i++;
	return (i);
}