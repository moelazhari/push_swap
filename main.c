/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 19:03:39 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int ac, char **av)
{
	stack	a;
	stack	b;

	if (ac > 2)
	{
	check_digit(ac, av);
	get_stack(ac, av, &a, &b);
	if (check_is_sort(&a) || a.top == 0)
	{
		free(a.tab);
		exit(0);
	}
	//get_index(&data);
	convert_index(&a);
	algo(&a, &b);
	/*
	int	i;


	i = 0;
	while (i <= a.top)
	{
		printf("%d\n", a.tab[a.top - i]);
		i++;
	}
	sort(&data);
	if (data.stacka)
		free(data.stacka);
	if (data.stackb)
		free(data.stackb);
	*/
	/*
	int	i;


	i = 0;
	while (i <= a.top)
	{
		printf("%d\n", a.tab[a.top - i]);
		i++;
	}
	*/
	}
	return (0);
}
