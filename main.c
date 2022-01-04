/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 21:42:51 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_digit(char *str, t_data *data)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && (str[i + 1] == '-' || str[i + 1] == ' '))
			exit_error(data);
		if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '-')
			exit_error(data);
		i++;
	}
}

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

int	check_is_sort(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->lena)
	{
		j = i + 1;
		while (j < data->lena)
		{
			if (data->stacka[i] > data->stacka[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static char	*get_join(int ac, char **av)
{
	char	*join;
	char	*temp;
	char	*join1;
	int		i;

	i = 0;
	join = ft_calloc(1, sizeof(char *));
	if (!join)
		exit(0);
	while (++i < ac)
	{
		temp = join;
		join1 = ft_strjoin(av[i], " ");
		join = ft_strjoin(join, join1);
		free(join1);
		free(temp);
	}
	return (join);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	t_data	data;
	char	*join;
	char	**split;
	int		i;

	if (ac < 2)
		return (0);
	i = -1;
	join = get_join(ac, av);
	check_digit(join, &data);
	split = ft_split(join, ' ');
	free(join);
	get_stack(split, &data);
	while (++i <= data.lena)
		free(split[i]);
	free(split);
	if (check_is_sort(&data) || data.lena == 1)
	{
		free(data.stacka);
		exit(0);
	}
	get_index(&data);
	sort(&data);
	if (data.stacka)
		free(data.stacka);
	if (data.stackb)
		free(data.stackb);
	while(1);
	return (0);
}
