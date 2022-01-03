/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/03 22:04:39 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_is_sort(t_data *data)
{
    int i;

    i = 0;
    while (i < data->asize)
    {
        if (data->stacka[i] > data->stacka[i + 1])
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char *av[])
{
    t_data data;
    
    if (ac < 2)
        return (0);

    
    get_stack(ac, av, &data);
    if (check_is_sort(&data))
    {
        free(data.stacka);
        return (0);
    }
    if (data.asize == 2)
        sa(&data);
    else if (data.asize == 3)
        sort_three(&data);
    else if (data.asize <= 5)
        sort_five(&data);
    /*
    data.bsize = 4;
    data.stackb = malloc( data.bsize * sizeof(int));
    data.stackb[0] = 69;
    data.stackb[1] = 6;
    data.stackb[2] = 90;
    data.stackb[3] = 8;
    */
   
    int i = 0;
    while (i < data.asize)
    {
        printf ("%d\n", data.stacka[i]);
        i++;
    }
    /*printf ("\n");
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
    }*/
    if (data.stacka)
        free(data.stacka);
    if (data.stackb)
        free(data.stackb);
}