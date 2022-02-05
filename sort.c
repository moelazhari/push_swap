/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:28:55 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 15:29:50 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	min_sort(stack *a)
{
	int	biggest;

	biggest = get_big(a->tab, a->top);
		if (a->tab[2] == biggest)
			sa(data);
		else if (a->tab[0] == biggest && a->tab[1] < a->tab[2])
			ra(data);
		else if (a->tab[0] == biggest && a->tab[1] > a->tab[2])
		{
			ra(data);
			sa(data);
		}
		else if (a->tab[1] == biggest && a->tab[0] > a->tab[2])
			rra(data);
		else if (a->tab[1] == biggest && a->tab[0] < a->tab[2])
		{
			sa(data);
			ra(data);
		}
	
}

static void	mide_sort(t_data *data)
{
	int	i;
	int	small;
	int	index;

	i = -1;
	small =	get_small(a->tab, a->top, &index);
	while (++i < a->top && a->top > 3)
	{
		if (a->tab[0] == small)
		{
			pb(data);
			small = get_small(a->tab, a->top, &index);
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


static void	sort_max(t_data *data)
{
	int	i;
	int	j;
	int	biggest;
	int	shift;
	int	len;

	i = -1;
	biggest = get_max(a->tab, a->top);
	shift = 0;
	len = a->top;
	while ((biggest >> shift) != 0)
		shift++;
	while (++i < shift)
	{
		j = -1;
		while (++j < len)
		{
			if (((a->tab[0] >> i) & 1) == 1)
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
	if  a->top == 2)
		sa(data);
	else if  a->top == 3)
	{
		min_sort(data);
	}
	else if  a->top <= 5)
		mide_sort(data);
		big_sort(data);
}
	else*/
