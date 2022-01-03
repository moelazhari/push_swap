/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:17:14 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/13 14:19:40 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*first;
	t_list	*new;

	if (!lst)
		return (NULL);
	temp = lst;
	first = ft_lstnew(f(temp->content));
	if (!first)
		return (NULL);
	temp = temp->next;
	while (temp)
	{
		new = ft_lstnew(f(temp->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		temp = temp->next;
	}
	return (first);
}
