/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:22 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 14:47:42 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void	add_in_a(stack *a, stack *b)
{
	int	*tab;
	int	i;
 
	i = 0;
	a->top++;
	tab = malloc((a->top + 1) * sizeof(int));
	if (!tab)
		exit_error(a, b);
	if (a->top)
	{
		while (i <= a->top)
		{	
			tab[i] = a->tab[i];
			i++;
		}
	}
	free(a->tab);
	tab[i] = b->tab[b->top];
	a->tab = tab;
}

static void	remove_from_b(stack *a, stack *b)
{
	int	*tab;
	int	i;

	i = 0;
	if (b->top == 0)
	{
		free(b->tab);
		b->tab = NULL;
		b->top = -1;
		return ;
	}
	tab = malloc((b->top) * sizeof(int));
	if (!tab)
		exit_error(a, b);
	while (i < b->top)
	{
		tab[i] = b->tab[i];
		i++;
	}
	free(a->tab);
	b->tab = tab;
	b->top--;
}

void	pa(stack *a, stack *b)
{
	if (b->tab)
	{
		add_in_a(a, b);
		remove_from_b(a, b);
		write (1, "pa\n", 3);
	}
}

void	pa(stack *a, stack *b)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
	write(1, "pa\n", 3);
}
*/
void	pa(stack *b, stack *a)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
	write(1, "pa\n", 3);
}