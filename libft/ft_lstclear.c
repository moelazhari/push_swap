/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:11:32 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/13 14:19:11 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*list;

	list = *lst;
	temp = NULL;
	if (!lst || !*lst || !del)
		return ;
	while (list)
	{
		if (list->next)
			temp = list->next;
		else
			temp = NULL;
		ft_lstdelone(list, del);
		list = temp;
	}
	(*lst) = NULL;
}
