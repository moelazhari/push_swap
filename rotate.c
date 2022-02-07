/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:01 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/07 18:31:52 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[s->top];
	i = s->top;
	while (i--)
		s->tab[i + 1] = s->tab[i];
	s->tab[0] = tmp;
	write (1, "ra\n", 3);
}

void	rb(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[s->top];
	i = s->top;
	while (i--)
		s->tab[i + 1] = s->tab[i];
	s->tab[0] = tmp;
	write (1, "rb\n", 3);
}

void	rr(stack *a, stack *b)
{
	int	tmp;
	int	i;

	tmp = a->tab[a->top];
	i = a->top;
	while (i--)
		a->tab[i + 1] = a->tab[i];
	a->tab[0] = tmp;
	tmp = b->tab[b->top];
	i = b->top;
	while (i--)
		b->tab[i + 1] = b->tab[i];
	b->tab[0] = tmp;
	write (1, "rr\n", 3);
}