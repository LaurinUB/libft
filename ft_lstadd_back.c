/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:05:09 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/25 16:23:53 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
	}
	if (ft_lstsize(new) > 1)
	{
		ft_lstlast(*lst)->next = new;
		ft_lstlast(*lst)->next = NULL;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
		new->next = NULL;
	}
}
