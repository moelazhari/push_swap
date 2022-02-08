/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:42:22 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/08 16:46:32 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(stack *a)
{
	int	swap;

	if (a->top >= 1)
	{
		swap = a->tab[a->top];
		a->tab[a->top] = a->tab[a->top - 1];
		a->tab[a->top - 1] = swap;
		write (1, "sa\n", 3);
	}
}

void	sb(stack *b)
{
	int	swap;

	if (b->top >= 1)
	{
		swap = b->tab[b->top];
		b->tab[b->top] = b->tab[b->top - 1];
		b->tab[b->top - 1] = swap;
		write (1, "sa\n", 3);
	}
}

void	ss(stack *a, stack *b)
{
	int	swap;
	
	if (a->top >= 1 && b->top >= 1)
	{
		swap = a->tab[a->top];
		a->tab[a->top] = a->tab[a->top - 1];
		a->tab[a->top - 1] = swap;
		swap = b->tab[b->top];
		b->tab[b->top] = b->tab[b->top - 1];
		b->tab[b->top - 1] = swap;
		write (1, "ss\n", 3);
	}
}
