/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:53:20 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/07 18:32:03 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[0];
	i = 0;
	while (i++ < s->top)
		s->tab[i - 1] = s->tab[i];
	s->tab[s->top] = tmp;
	write (1, "rra\n", 4);
}

void	rrb(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[0];
	i = 0;
	while (i++ < s->top)
		s->tab[i - 1] = s->tab[i];
	s->tab[s->top] = tmp;
	write (1, "rrb\n", 4);
}

void	rrr(stack *a, stack *b)
{
	int	tmp;
	int	i;

	tmp = a->tab[0];
	i = 0;
	while (i++ < a->top)
		a->tab[i - 1] = a->tab[i];
	a->tab[a->top] = tmp;
	tmp = b->tab[0];
	i = 0;
	while (i++ < b->top)
		b->tab[i - 1] = b->tab[i];
	b->tab[b->top] = tmp;
	write (1, "rrr\n", 4);
}