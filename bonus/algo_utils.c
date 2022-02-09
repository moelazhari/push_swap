/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:10:14 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:11:32 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_digit(int ac, char **av, t_stack *a, t_stack *b)
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

int	check_is_sort(t_stack a)
{
	int	i;

	i = -1;
	while (++i < a.top)
	{
		if (a.tab[i] < a.tab[i + 1])
			return (0);
	}
	return (1);
}
