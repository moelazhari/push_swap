/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:42:22 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/05 13:47:45 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	swap;

	if (data->lena > 1)
	{
		swap = data->stacka[0];
		data->stacka[0] = data->stacka[1];
		data->stacka[1] = swap;
		write (1, "sa\n", 3);
	}
}

void	sb(t_data *data)
{
	int	swap;

	if (data->lenb > 1)
	{
		swap = data->stackb[0];
		data->stackb[0] = data->stackb[1];
		data->stackb[1] = swap;
		write (1, "sb\n", 3);
	}
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
	write (1, "ss\n", 3);
}
