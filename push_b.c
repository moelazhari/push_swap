/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:05:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/03 13:05:29 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_in_stackb(t_data *data)
{
	int	*stack;
	int	i;
    int j;

	i = 0;
    j = 0;
	stack = malloc((data->bsize + 1) * sizeof(int));
	if (!stack)
		exit_error(data);
    stack[0] = data->stacka[0];
	if (data->stackb)
	{
		while (i < data->bsize)
		{	
			stack[i + 1] = data->stackb[i];
            i++;
		}
		free(data->stackb);
	}
	data->bsize++;
	data->stackb = stack;
}

static void	remove_from_stacka(t_data *data)
{
	int	*stack;
	int	i;

	i = 0;
	if (data->asize == 1)
	{
		free(data->stacka);
		data->stacka = NULL;
		data->asize = 0;
		return ;
	}
    stack = malloc((data->asize - 1) * sizeof(int));
	if (!stack)
		exit_error(data);
	while (i < data->asize - 1)
	{
	    stack[i] = data->stacka[i + 1];
		i++;
	}
	free(data->stacka);
    data->asize--;
	data->stacka = stack;
}

void	pb(t_data *data)
{
	if (data->asize)
	{
		add_in_stackb(data);
		remove_from_stacka(data);
	}
}