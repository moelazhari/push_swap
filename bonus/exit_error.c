/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:41:59 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/09 14:15:55 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	exit_error(t_stack *a, t_stack *b)
{
	if (a->tab)
		free(a->tab);
	if (b->tab)
		free(b->tab);
	write(2, "Error\n", 6);
	exit(1);
}
