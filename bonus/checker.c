/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:10:24 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:15:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	check_instructions(char *str, t_stack *a, t_stack *b)
{
	if (!ft_strncmp("sa\n", str, 3))
		sa(a);
	else if (!ft_strncmp("sb\n", str, 3))
		sb(b);
	else if (!ft_strncmp("ss\n", str, 3))
		ss(a, b);
	else if (!ft_strncmp("pa\n", str, 3))
		pa(a, b);
	else if (!ft_strncmp("pb\n", str, 3))
		pb(a, b);
	else if (!ft_strncmp("ra\n", str, 3))
		ra(a);
	else if (!ft_strncmp("rb\n", str, 3))
		rb(b);
	else if (!ft_strncmp("rr\n", str, 3))
		rr(a, b);
	else if (!ft_strncmp("rra\n", str, 4))
		rra(a);
	else if (!ft_strncmp("rrb\n", str, 4))
		rrb(b);
	else if (!ft_strncmp("rrr\n", str, 4))
		rrr(a, b);
	else
		exit_error(a, b);
}

static void	get_instructions(t_stack *a, t_stack *b)
{
	char	*instructions;

	while (1)
	{
		instructions = get_next_line(0);
		if (!instructions)
			break ;
		check_instructions(instructions, a, b);
		free(instructions);
	}
}

int	main(int ac, char *av[])
{
	t_stack	a;
	t_stack	b;

	if (ac > 1)
	{
		check_digit(ac, av, &a, &b);
		get_stack(ac, av, &a, &b);
		get_instructions(&a, &b);
		if (check_is_sort(a) && b.top == -1)
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
		if (a.tab)
			free(a.tab);
		if (b.tab)
			free(b.tab);
	}
	return (0);
}
