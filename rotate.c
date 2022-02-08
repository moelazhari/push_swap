/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:01 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/08 16:47:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(stack *a)
{
	int	tmp;
	int	i;

	if (a->top >= 0)
	{
		tmp = a->tab[a->top];
		i = a->top;
		while (i--)
			a->tab[i + 1] = a->tab[i];
		a->tab[0] = tmp;
		write (1, "ra\n", 3);
	}
}

void	rb(stack *b)
{
	int	tmp;
	int	i;

	if (b->top >= 0)
	{
		tmp = b->tab[b->top];
		i = b->top;
		while (i--)
			b->tab[i + 1] = b->tab[i];
		b->tab[0] = tmp;
	}
	write (1, "rb\n", 3);
}

void	rr(stack *a, stack *b)
{
	int	tmp;
	int	i;


	if (a->top >= 0 && b->top >= 0)
	{
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
}