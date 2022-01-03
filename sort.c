/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/03 17:27:08 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_max(int *arr, int len)
{
    int i;
    int max;

    max = 0;
    i = 0;
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
    if (data->stacka[2] == get_max(data->stacka, 3))
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
    pb(data);
    pb(data);
    sort_three(data);
    pa(data);
    if (data->stacka[0] > data->stacka[1])
        ra(data);
    int i = 0;
    while (i < data->asize)
    {
        printf ("%d\n", data->stacka[i]);
        i++;
    }
    pa(data);
    if (data->stacka[0] > data->stacka[1])
        ra(data);
}