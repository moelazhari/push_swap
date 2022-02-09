/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:53:20 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:16:46 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_stack *a)
{
	int	tmp;
	int	i;

	if (a->top >= 0)
	{
		tmp = a->tab[0];
		i = 0;
		while (i++ < a->top)
			a->tab[i - 1] = a->tab[i];
		a->tab[a->top] = tmp;
	}
}

void	rrb(t_stack *b)
{
	int	tmp;
	int	i;

	if (b->top >= 0)
	{
		tmp = b->tab[0];
		i = 0;
		while (i++ < b->top)
			b->tab[i - 1] = b->tab[i];
		b->tab[b->top] = tmp;
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	if (a->top >= 0 && b->top >= 0)
	{
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
	}
}
