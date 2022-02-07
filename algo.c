/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:02:19 by yel-khad          #+#    #+#             */
/*   Updated: 2022/02/07 18:54:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_sort(stack *a)
{
	int	big;
	
	if (!check_is_sort(*a))
	{
	big = find_max(a->tab, a->top);
	if (a->tab[0] == a->tab[big])
		sa(a);
	else if (a->tab[2] == a->tab[big] && a->tab[1] < a->tab[0])
		ra(a);
	else if (a->tab[2] == a->tab[big] && a->tab[1] > a->tab[0])
	{
		ra(a);
		sa(a);
	}
	else if (a->tab[1] == a->tab[big] && a->tab[2] > a->tab[0])
		rra(a);
	else if (a->tab[1] == a->tab[big] && a->tab[2] < a->tab[0])
	{
		sa(a);
		ra(a);
	}
	}
}

void	sort_b(stack *b)
{
	int max;

	max = find_max(b->tab, b->top);
	if (max == b->top)
		return ;
	else if (max < (b->top) / 2)
	{
		while (max-- >= 0)
			rrb(b);
	}
	else 
	{
		while (max < b->top)
		{
			rb(b);
			max++;
		}
	}
}

void	sort_a(stack *a, stack *b, int	mid)
{
	if (a->tab[a->top] <= mid)
		pb(a, b);
	else if (a->tab[0] <= mid)
		rra(a);
	else if (a->tab[(a->top) - 1] <= mid)
		sa(a);
	else
		ra(a);
}

int check_mid(stack *a, int mid)
{
	int i;
	
	i = 0;
	while (i <= a->top)
	{
		if (a->tab[i] <= mid)
			return (1);
		i++;
	}
	return (0);
}

void	algo(stack *a, stack *b)
{
	int mid;

	mid = (a->tab[find_max(a->tab, a->top)] + 4 * (a->tab[find_min(a->tab, a->top)])) / 5;
	mid = (a->top % 5 == 0 ? mid : mid + 1);
	while (a->top > 2)
	{
		sort_a(a, b, mid);
		if (!check_mid(a, mid))
		{
			mid = (a->tab[find_max(a->tab, a->top)] + 4 * (a->tab[find_min(a->tab, a->top)])) / 5;
			mid = (a->top % 5 == 0 ? mid : mid + 1);
		}
	}
	min_sort(a);
	while (b->top >= 0)
	{
		sort_b(b);
		pa(a, b);
		if (a->tab[a->top] > a->tab[(a->top) - 1])
			sa(a);
	}
}