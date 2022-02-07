/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/07 18:32:41 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(stack *b, stack *a)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
	write(1, "pa\n", 3);
}

void	pb(stack *a, stack *b)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
	write(1, "pb\n", 3);
}