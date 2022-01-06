/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/06 20:33:34 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			ra(data);
			sa(data);
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
	int	small;

	i = -1;
	small = get_small(data->stacka, data->lena);
	while (++i < data->lena && data->lena > 3)
	{
		if (data->stacka[0] == small)
		{
			pb(data);
			i = 0;
			small = get_small(data->stacka, data->lena);
		}
		else if (data->stacka[data->lena - 1] == small)
			rra(data);
		else
			ra(data);
	}
	if (!check_is_sort(data))
		sort_min(data);
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
	if (data->lena == 2)
		sa(data);
	else if (data->lena == 3)
		sort_min(data);
	else if (data->lena <= 5)
		sort_mide(data);
	//else
	//	sort_max(data);
}
