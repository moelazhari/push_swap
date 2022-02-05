/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:02:19 by yel-khad          #+#    #+#             */
/*   Updated: 2022/02/05 19:03:03 by mazhari          ###   ########.fr       */
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
		sa(a);
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
	if (max < (b->top) / 2)
	{
		while (max++ < b->top)
			rrb(b);
	}
	else 
	{
		while (max-- > 0)
			rb(b);
	}
}

void	sort_a(stack *a, stack *b)
{
	int	mid;
	int	i;

	mid = a->top / 2;
	i = a->top;
	if (a->top == 2)
		return ;
	//printf("%d\n%d\n", a->top, mid);
	while (a->top > mid)
	{
	//	printf("%d", a->top);
		if (a->tab[a->top] <= mid)
			pb(a, b);
		else if (a->tab[(a->top) - 1] <= mid)
			sa(a);
		else if (a->tab[0] <= mid)
			rra(a);
		else
			ra(a);
	}
	sort_a(a, b);
}

void	algo(stack *a, stack *b)
{
	sort_a(a,b);
	min_sort(a);
	while (b->top >= 0)
	{
		sort_b(b);
		pa(a, b);
		if (a->tab[a->top] > a->tab[(a->top) - 1])
			sa(a);
	}
}

