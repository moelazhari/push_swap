/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 16:00:31 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_doubel(stack *a, stack *b)
{
	int	i;
	int	j;

	i = 0;
	while (i <= a->top)
	{
		j = i + 1;
		while (j <= a->top)
		{
			if (a->tab[i] == a->tab[j])
				exit_error(a, b);
			j++;
		}
		i++;
	}
}

void	get_stack(int ac, char **av, stack *a, stack *b)
{
	int		i;
	long	n;
	
	i = -1;
	n = 0;
	a->top = ac - 2;
	a->tab = malloc((a->top + 1) * sizeof(int));
	while (++i <= a->top)
	{
		n = atoll(av[a->top]);
		if (n > 2147483647 || n < -2147483648)
			exit_error(a, b);
		a->tab[i] = ft_atoi(av[ac - 1 - i]);
	}
	check_doubel(a, b);
	b->top = -1;
	b->tab = malloc((a->top + 1) * sizeof(int));
}
