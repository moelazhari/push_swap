/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:42:06 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 11:45:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

long	ft_atoll(const char *str)
{
	long	rus;
	int		vul;
	int		i;

	i = 0;
	vul = 1;
	rus = 0;
	while ((str[i] == ' ' || str[i] == '\f')
		|| (str[i] == '\n' || str[i] == '\r')
		|| (str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			vul *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rus = (rus * 10) + ((int)str[i] - '0');
		i++;
	}	
	return (vul * rus);
}
