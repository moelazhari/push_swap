/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:42:22 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 11:53:47 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_data *data)
{
	int	swap;

	if (data->lena > 1)
	{
		swap = data->stacka[0];
		data->stacka[0] = data->stacka[1];
		data->stacka[1] = swap;
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
	}
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
}
