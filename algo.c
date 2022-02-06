/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:02:19 by yel-khad          #+#    #+#             */
/*   Updated: 2022/02/06 17:32:33 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max(int *tab, int top)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i <= top)
	{
		if (tab[i] > tab[max])
			max = i;
		i++;
	}
	return (max);
}

static int	find_min(int *tab, int top)
{
	int	min;
	int	i;

	min = 0;
	i = 0;
	while (i <= top)
	{
		if (tab[i] <= tab[min])
			min = i;
		i++;
	}
	//tab[min] = tab[find_max(tab, top)];
	return (min);
}

int	check_order(stack a)
{
	int	i = 0;

	while (i < a.top)
	{
		if (a.tab[i] < a.tab[i + 1])
			break ;
		i++;
	}
	return (i == a.top);
}

void	min_sort(stack *a)
{
	int	big;
	
	if (!check_order(*a))
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
	if (max < (b->top) / 2)
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

void	sort_a(stack *a, stack *b)
{
	int	mid;
	int	i;

	mid = (a->tab[find_max(a->tab, a->top)] + a->tab[find_min(a->tab, a->top)]) / 2;
	i = 0;
	while (i < a->top / 2)
	{
		if (a->tab[a->top] <= mid)
			pb(a, b);
		else if (a->tab[0] <= mid)
			rra(a);
		else if (a->tab[(a->top) - 1] <= mid)
			sa(a);
		else
			ra(a);
		i++;
	}
}

void	algo(stack *a, stack *b)
{
	while (a->top > 2)
		sort_a(a,b);
	min_sort(a);
	while (b->top >= 0)
	{
		sort_b(b);
		pa(a, b);
		//printf("%d", a->top);
		if (a->tab[a->top] > a->tab[(a->top) - 1])
			sa(a);
	}
}

