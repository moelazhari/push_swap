/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:02:29 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->top >= 0)
	{
		a->tab[(a->top) + 1] = b->tab[b->top];
		b->top -= 1;
		a->top += 1;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->top >= 0)
	{
		b->tab[(b->top) + 1] = a->tab[a->top];
		a->top -= 1;
		b->top += 1;
		write(1, "pb\n", 3);
	}
}
