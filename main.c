/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 13:48:03 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void check_digit(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '-' && str[i + 1] == '-')
            exit(0);
        if (!ft_isdigit(str[i]) && str[i]!= ' ' && str[i]!= '-')
            exit(0);
        i++;
    }
}

static void	getpos(t_data *data)
{
	int	i;
	int	j;
	int	pos;
	int	*ptr;

	i = 0;
	ptr = malloc((data->asize) * sizeof(int));
	if (!ptr)
		exit_error(data);
	while (i < data->asize)
	{
		j = 0;
		pos = 0;
		while (j < data->asize)
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

static int check_is_sort(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->asize)
	{
		j = i + 1;
		while (j < data->asize)
		{
			if (data->stacka[i] > data->stacka[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
*/
int main(int ac, char *av[])
{
    t_data  data;
    char    *join;
    char    **split;
    int i;
    
    i = 0;   
    if (ac < 2)
        return (0);
    join = ft_calloc(1, sizeof(char *));
    while (++i < ac)
        join = ft_strjoin(join, av[i]);
    check_digit(join);
    split = ft_split(join, ' ');
    free(join);
    get_stack(split, &data);
    
/*
    exit(0);
    get_len(ac, av, &data);
    if (check_is_sort(&data) || data.asize == 1)
    {
        free(data.stacka);
        exit(0);
    }
    getpos(&data);
    if (data.asize == 2)
        sa(&data);
    else if (data.asize == 3)
        sort_min(&data);
    else if (data.asize <= 5)
        sort_mide(&data);
    else
        sort_max(&data);
    data.bsize = 4;
    data.stackb = malloc( data.bsize * sizeof(int));
    data.stackb[0] = 69;
    data.stackb[1] = 6;
    data.stackb[2] = 90;
    data.stackb[3] = 8;
    */
   
    /*int i = 0;
    while (i < data.asize)
    {
        printf ("%d\n", data.stacka[i]);
        i++;
    }
    printf ("\n");
    i = 0;
    while (i < data.bsize)
    {
        printf ("%d\n", data.stackb[i]);
        i++;
    }
    printf ("\n");
    rrr(&data);
    printf ("\n");
    i = 0;
    while (i < data.asize)
    {
        printf ("%d\n", data.stacka[i]);
        i++;
    }
    printf ("\n");
    i = 0;
    while (i < data.bsize)
    {
        printf ("%d\n", data.stackb[i]);
        i++;
    }
    if (data.stacka)
        free(data.stacka);
    if (data.stackb)
        free(data.stackb);
    */
}