/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/03 22:01:35 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max(int *arr, int len)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}

void	sort_three(t_data *data)
{
    if (data->stacka[2] == get_max(data->stacka, data->asize))
        sa(data);
    else if (data->stacka[0] == get_max(data->stacka, data->asize))
    {
        if (data->stacka[1] < data->stacka[2])
            ra(data);
        else
        {
            sa(data);
            rra(data);
        }
    }
    else
    {
        if (data->stacka[0] > data->stacka[2])
            rra(data);
        else
        {
            sa(data);
            ra(data);
        }
    }
}

void	sort_five(t_data *data)
{
	int	max;
	int	mid;
	int	i;
    
	i = 0;
	max = data->asize;
	mid = get_max(data->stacka, data->asize) / 2;
	if  (get_max(data->stacka, data->asize) % 2)
		mid = get_max(data->stacka, data->asize) / 2 + 1;
	while (i < max && max > 3)
	{
		if (data->stacka[0] < mid)
			pb(data);
		else
			ra(data);
        i++;
	}
	sort_three(data);
	if (data->bsize == 2)
		if (data->stackb[0] > data->stackb[1])
			sb(data);
	while (data->stackb)
		pa(data);
}
