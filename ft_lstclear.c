/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:03:58 by luntiet-          #+#    #+#             */
/*   Updated: 2022/10/28 18:32:04 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*dl;

	if (!*lst)
		lst = NULL;
	if (del && lst && *lst)
	{
		tmp = *lst;
		dl = tmp;
		while (tmp)
		{
			if (tmp->content)
				del(tmp->content);
			tmp = tmp->next;
			free(dl);
			dl = tmp;
		}
		*lst = NULL;
	}
}
