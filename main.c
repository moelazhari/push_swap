/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/02 13:30:14 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_digit(int ac, char **str, t_data *data)
{
	int	i;
	int j;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-')
				j++;
			if (!ft_isdigit(str[i][j]))
				exit_error(data);
			j++;	
		}
	}
}
/*
static void	get_index(t_data *data)
{
	int	i;
	int	j;
	int	pos;
	int	*ptr;

	i = 0;
	ptr = malloc((data->lena) * sizeof(int));
	if (!ptr)
		exit_error(data);
	while (i < data->lena)
	{
		j = 0;
		pos = 0;
		while (j < data->lena)
		{
			if (data->stacka[i] > data->stacka[j])
				pos++;
			j++;
		}
		ptr[i] = pos + 1;
		i++;
	}
	free(data->stacka);
	data->stacka = ptr;
}
*/
int	check_is_sort(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->lena - 1)
	{
		if (data->stacka[i] > data->stacka[i + 1])
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac > 2)
	{
	check_digit(ac, av, &data);
	get_stack(ac, av, &data);
	if (check_is_sort(&data) || data.lena == 1)
	{
		free(data.stacka);
		exit(0);
	}
	//get_index(&data);
	sort(&data);
	if (data.stacka)
		free(data.stacka);
	if (data.stackb)
		free(data.stackb);
	}
	return (0);
}
