/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 19:05:55 by mazhari          ###   ########.fr       */
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

static void	sort_min(t_data *data)
{
	int	biggest;

	biggest = get_max(data->stacka, data->lena);
	if (data->stacka[2] == biggest)
		sa(data);
	else if (data->stacka[0] == biggest)
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

static void	sort_mide(t_data *data)
{
	int	i;
	int	biggest;
	int	len;
	int	mid;

	i = -1;
	biggest = get_max(data->stacka, data->lena);
	len = data->lena;
	mid = biggest / 2;
	if (biggest % 2)
		mid = biggest / 2 + 1;
	while (++i < len && data->lena > 3)
	{
		if (data->stacka[0] < mid)
			pb(data);
		else
			ra(data);
	}
	if (!check_is_sort(data))
		sort_min(data);
	if (data->lenb == 2)
		if (data->stackb[0] < data->stackb[1])
			sb(data);
	while (data->stackb)
		pa(data);
}

static void	sort_max(t_data *data)
{
	int	i;
	int	j;
	int	biggest;
	int	shift;
	int	len;

	i = -1;
	biggest = get_max(data->stacka, data->lena);
	shift = 0;
	len = data->lena;
	while ((biggest >> shift) != 0)
		shift++;
	while (++i < shift)
	{
		j = -1;
		while (++j < len)
		{
			if (((data->stacka[0] >> i) & 1) == 1)
				ra(data);
			else
				pb(data);
		}
		while (data->stackb)
			pa(data);
	}
}

void	sort(t_data *data)
{
	if (data->lena == 2)
		sa(data);
	else if (data->lena == 3)
		sort_min(data);
	else if (data->lena <= 5)
		sort_mide(data);
	else
		sort_max(data);
}
