/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 15:54:15 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_doubel(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack->top)
	{
		j = i + 1;
		while (j < stack->top)
		{
			if (stack->arr[i] == stack->arr[j])
				exit_error(stack);
			j++;
		}
		i++;
	}
}

void	get_stack(int ac, char **av, t_stack *stack)
{
	int		i;
	long	n;
	
	i = -1;
	n = 0;
	stack->top = ac - 2;
	stack->arr = malloc((stack->top + 1) * sizeof(int));
	while (++i <= stack->top)
	{
		n = atoll(av[stack->top]);
		if (n > 2147483647 || n < -2147483648)
			exit_error(stack);
		stack->arr[i] = ft_atoi(av[ac - 1 - i]);
	}
	check_doubel(stack);
}
