/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 13:58:01 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static void data_init(char **split, t_data *data)
{
    int i;

    i = 0;
    while (split[i])
        i++;
    data->lena = i;
	data->stacka = malloc(data->lena * sizeof(int));
	data->lenb = 0;
	data->stackb = NULL;
}

static void fill_stack(char **split, t_data *data)
{
    int i;
    long n;
    
    i = 1;
    n = 0;
    while (i < data->lena)
    {
        n = atoll(split[i]);
        if (n > 2147483647 || n < -2147483648)
			    exit_error(data);
        data->stacka[i] = ft_atoi(split[i]);
        i++;
    }
}

static void check_doubel(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->lena)
	{
		j = i + 1;
		while (j < data->lena)
		{
			if (data->stacka[j] == data->stacka[i])
				exit_error(data);
			j++;
		}
		i++;
	}
}

void get_stack(char **split, t_data *data)
{   
    data_init(split, data);
    fill_stack(split, data);
    check_doubel(data);
}