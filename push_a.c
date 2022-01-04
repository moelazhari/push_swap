/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:22 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 18:48:20 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_in_stacka(t_data *data)
{
	int	*stack;
	int	i;
	int	j;

	i = 0;
	j = 0;
	stack = malloc((data->lena + 1) * sizeof(int));
	if (!stack)
		exit_error(data);
	stack[0] = data->stackb[0];
	if (data->stacka)
	{
		while (i < data->lena)
		{	
			stack[i + 1] = data->stacka[i];
			i++;
		}
		free(data->stacka);
	}
	data->lena++;
	data->stacka = stack;
}

static void	remove_from_stackb(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	if (data->lenb == 1)
	{
		free(data->stackb);
		data->stackb = NULL;
		data->lenb = 0;
		return ;
	}
	stack = malloc((data->lenb - 1) * sizeof(int));
	if (!stack)
		exit_error(data);
	while (i < data->lenb - 1)
	{
		stack[i] = data->stackb[i + 1];
		i++;
	}
	free(data->stackb);
	data->lenb--;
	data->stackb = stack;
}

void	pa(t_data *data)
{
	if (data->lenb)
	{
		add_in_stacka(data);
		remove_from_stackb(data);
		write (1, "pa\n", 3);
	}
}
