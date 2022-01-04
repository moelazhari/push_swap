/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:01 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 19:03:20 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
