/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/08 16:12:29 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void check_digit(int ac, char **str,	stack *a, stack *b)
{
	int	i;
	int j;

	i = 0;
	while (++i < ac)
	{
		if (str[i][0] == '\0')
			exit_error(a, b);
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-')
				j++;
			if (!ft_isdigit(str[i][j]))
				exit_error(a, b);
			j++;	
		}
	}
}

static void	get_index(stack *a, stack *b)
{
	int	i;
	int	j;
	int	pos;
	int	*ptr;

	i = 0;
	ptr = malloc((a->top + 1) * sizeof(int));
	if (!ptr)
		exit_error(a, b);
	while (i <= a->top)
	{
		j = 0;
		pos = 0;
		while (j <= a->top)
		{
			if (a->tab[i] > a->tab[j])
				pos++;
			j++;
		}
		ptr[i] = pos;
		i++;
	}
	free(a->tab);
	a->tab = ptr;
}

int	main(int ac, char **av)
{
	stack	a;
	stack	b;

	if (ac > 2)
	{
		check_digit(ac, av, &a, &b);
		get_stack(ac, av, &a, &b);
		if (check_is_sort(a) || a.top == 0)
		{
			free(a.tab);
			return (0);
		}
		get_index(&a, &b);
		algo(&a, &b);
		if (a.tab)
			free(a.tab);
		if (b.tab)
			free(b.tab);
	}
	return (0);
}