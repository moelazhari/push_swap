/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:02:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_digit(int ac, char **av,	t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	long	n;

	i = 0;
	while (++i < ac)
	{
		if (av[i][0] == '\0')
			exit_error(a, b);
		n = atoll(av[i]);
		if (n > 2147483647 || n < -2147483648)
			exit_error(a, b);
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (!ft_isdigit(av[i][j]))
				exit_error(a, b);
			j++;
		}
	}
}

static void	get_index(t_stack *a, t_stack *b)
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
	t_stack	a;
	t_stack	b;

	if (ac > 1)
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
