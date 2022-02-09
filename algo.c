/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:02:19 by yel-khad          #+#    #+#             */
/*   Updated: 2022/02/09 14:00:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_sort(t_stack *a)
{
	int	big;

	if (a->top == 1)
		if (!check_is_sort(*a))
			sa(a);
	if (!check_is_sort(*a))
	{
		big = max(a->tab, a->top);
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

void	sort_b(t_stack *b)
{
	int	big;

	big = max(b->tab, b->top);
	if (big == b->top)
		return ;
	else if (big < (b->top) / 2)
	{
		while (big-- >= 0)
			rrb(b);
	}
	else
	{
		while (big < b->top)
		{
			rb(b);
			big++;
		}
	}
}

void	sort_a(t_stack *a, t_stack *b, int mid)
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

int	check_mid(t_stack *a, int mid)
{
	int	i;

	i = 0;
	while (i <= a->top)
	{
		if (a->tab[i] <= mid)
			return (1);
		i++;
	}
	return (0);
}

void	algo(t_stack *a, t_stack *b)
{
	int	mid;

	mid = (a->tab[max(a->tab, a->top)] + 4 * (a->tab[min(a->tab, a->top)])) / 5;
	while (a->top > 2)
	{
		sort_a(a, b, mid);
		if (!check_mid(a, mid))
			mid = (a->tab[max(a->tab, a->top)]
					+ 4 * (a->tab[min(a->tab, a->top)])) / 5;
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
