/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:41:59 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/05 11:44:49 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(stack *a, stack *b)
{
	if (a->tab)
		free(a->tab);
	if (b->tab)
		free(b->tab);
	write(2, "Error\n", 6);
	exit(0);
}
