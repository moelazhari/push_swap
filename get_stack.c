/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/05 17:13:42 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static void	data_init(int ac, t_data *data)
{
	int	i;

	i = 0;
	data->lena = ac - 1;
	data->stacka = malloc(data->lena * sizeof(int));
	if(!data->stacka)
		exit_error(data);
	data->lenb = 0;
	data->stackb = NULL;
}

static void	fill_stack(char **av, t_data *data)
{
	int		i;
	long	n;
	
	i = -1;
	n = 0;
	while (++i < data->lena)
	{
		n = atoll(av[i + 1]);
		if (n > 2147483647 || n < -2147483648)
			exit_error(data);
		data->stacka[i] = ft_atoi(av[i + 1]);
	}
}

static void	check_doubel(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->lena)
	{
		j = i + 1;
		while (j < data->lena)
		{
			if (data->stacka[i] == data->stacka[j])
				exit_error(data);
			j++;
		}
		i++;
	}
}

void	get_stack(int ac, char **av, t_data *data)
{
	data_init(ac, data);
	fill_stack(av, data);
	check_doubel(data);
}
