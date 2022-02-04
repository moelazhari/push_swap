/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:41:59 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 11:43:39 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	exit_error(t_data *data)
{
	if (data->stacka)
		free(data->stacka);
	if (data->stackb)
		free(data->stackb);
	write(2, "Error\n", 6);
	exit(0);
}
