/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/03 15:13:56 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_sort(t_data *data)
{
	int	biggest;

	if (!check_is_sort(data))
	{
		biggest = get_big(data->stacka, data->lena);
		if (data->stacka[2] == biggest)
			sa(data);
		else if (data->stacka[0] == biggest && data->stacka[1] < data->stacka[2])
			ra(data);
		else if (data->stacka[0] == biggest && data->stacka[1] > data->stacka[2])
		{
			ra(data);
			sa(data);
		}
		else if (data->stacka[1] == biggest && data->stacka[0] > data->stacka[2])
			rra(data);
		else if (data->stacka[1] == biggest && data->stacka[0] < data->stacka[2])
		{
			sa(data);
			ra(data);
		}
	}
}

static void	mide_sort(t_data *data)
{
	int	i;
	int	small;
	int	index;

	i = -1;
	small =	get_small(data->stacka, data->lena, &index);
	while (++i < data->lena && data->lena > 3)
	{
		if (data->stacka[0] == small)
		{
			pb(data);
			small = get_small(data->stacka, data->lena, &index);
			i = 0;
		}
		else if (index > 2)
			rra(data);
		else
			ra(data);
	}
	min_sort(data);
	while (data->stackb)
		pa(data);
}

/*
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
*/
void	sort(t_data *data)
{
	/*if (data->lena == 2)
		sa(data);
	else if (data->lena == 3)
	{
		min_sort(data);
	}
	else if (data->lena <= 5)
		mide_sort(data);
	else*/
		big_sort(data);
}
