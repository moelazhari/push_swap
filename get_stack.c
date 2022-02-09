/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:06:22 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_doubel(t_stack *a, t_stack *b)
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

void	get_stack(int ac, char **av, t_stack *a, t_stack *b)
{
	int		i;

	i = -1;
	a->top = ac - 2;
	a->tab = malloc((a->top + 1) * sizeof(int));
	while (++i <= a->top)
		a->tab[i] = ft_atoi(av[ac - 1 - i]);
	check_doubel(a, b);
	b->top = -1;
	b->tab = malloc((a->top + 1) * sizeof(int));
}
