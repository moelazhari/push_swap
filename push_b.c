/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/02 18:03:40 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_in_stackb(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	stack = malloc((data->lenb + 1) * sizeof(int));
	if (!stack)
		exit_error(data);
	stack[0] = data->stacka[0];
	if (data->stackb)
	{
		while (i < data->lenb)
		{	
			stack[i + 1] = data->stackb[i];
			i++;
		}
		free(data->stackb);
	}
	data->lenb += 1;
	data->stackb = stack;
}

static void	remove_from_stacka(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	if (data->lena == 1)
	{
		free(data->stacka);
		data->stacka = NULL;
		data->lena = 0;
		return ;
	}
	stack = malloc((data->lena - 1) * sizeof(int));
	if (!stack)
		exit_error(data);
	while (i < data->lena - 1)
	{
		stack[i] = data->stacka[i + 1];
		i++;
	}
	free(data->stacka);
	data->lena -= 1;
	data->stacka = stack;
}

void	pb(t_data *data)
{
	if (data->lena)
	{
		add_in_stackb(data);
		remove_from_stacka(data);
		write (1, "pb\n", 3);
	}
}
