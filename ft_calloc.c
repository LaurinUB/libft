/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:09:24 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/22 18:33:02 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
