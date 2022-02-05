/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:53:20 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 15:04:37 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	rra(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	stack = malloc(data->lena * sizeof(int));
	while (i < data->lena)
	{
		stack[i] = data->stacka[i];
		i++;
	}
	i = 0;
	data->stacka[0] = data->stacka[data->lena - 1];
	i++;
	while (i < data->lena)
	{
		data->stacka[i] = stack[i - 1];
		i++;
	}
	write (1, "rra\n", 4);
	free(stack);
}

void	rrb(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	stack = malloc(data->lenb * sizeof(int));
	while (i < data->lenb)
	{
		stack[i] = data->stackb[i];
		i++;
	}
	i = 0;
	data->stackb[0] = data->stackb[data->lenb - 1];
	i++;
	while (i < data->lenb)
	{
		data->stackb[i] = stack[i - 1];
		i++;
	}
	write (1, "rrb\n", 4);
	free(stack);
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
	write (1, "rrr\n", 4);
}
*/

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