/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 14:46:06 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static void	add_in_b(stack *a, stack *b)
{
	int	*tab;
	int	i;
 
	i = 0;
	b->top++;
	tab = malloc((b->top + 1) * sizeof(int));
	if (!tab)
		exit_error(a, b);
	if (b->top)
	{
		while (i <= b->top)
		{	
			tab[i] = b->tab[i];
			i++;
		}
	}
	free(b->tab);
	tab[i] = a->tab[a->top];
	b->tab = tab;
}

static void	remove_from_a(stack *a, stack *b)
{
	int	*tab;
	int	i;

	i = 0;
	if (a->top == 0)
	{
		free(a->tab);
		a->tab = NULL;
		a->top = -1;
		return ;
	}
	tab = malloc((a->top) * sizeof(int));
	if (!tab)
		exit_error(a, b);
	while (i < a->top)
	{
		tab[i] = a->tab[i];
		i++;
	}
	free(a->tab);
	a->tab = tab;
	a->top--;
}

void	pb(stack *a, stack *b)
{
	if (a->tab)
	{
		add_in_b(a, b);
		remove_from_a(a, b);
		write (1, "pa\n", 3);
	}
}
*/
void	pb(stack *a, stack *b)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
	write(1, "pb\n", 3);
}