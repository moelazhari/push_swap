/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:53:20 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 11:47:30 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	free(stack);
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}
