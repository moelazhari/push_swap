/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:01 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 15:02:58 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	ra(t_data *data)
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
	data->stacka[data->lena - 1] = stack[0];
	while (i < data->lena - 1)
	{
		data->stacka[i] = stack[i + 1];
		i++;
	}
	write (1, "ra\n", 3);
	free(stack);
}

void	rb(t_data *data)
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
	data->stackb[data->lenb - 1] = stack[0];
	while (i < data->lenb - 1)
	{
		data->stackb[i] = stack[i + 1];
		i++;
	}
	write (1, "rb\n", 3);
	free(stack);
}

void	rr(t_data *data)
{
	ra(data);
	rb(data);
	write (1, "rr\n", 3);
}
*/

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