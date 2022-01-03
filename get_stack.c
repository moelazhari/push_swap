/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:48:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/03 21:09:09 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static void  check_digit(int ac, char **av, t_data *data)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-')
                exit_error(data);
            j++;
        }
        i++;
    }
}

static void get_len(int ac, char **av, t_data *data)
{
    char **split;
    int i;
    int j;
    int k;

    i = 1;
    k = 0;
    while (i < ac)
    {
        j = 0;
        split = ft_split(av[i], ' ');
        while (split[j])
        {
                j++;
                k++;
        }
        i++;
    }
    data->asize = k;
}

static void data_init(t_data *data)
{
	data->stacka = malloc(data->asize * sizeof(int));
	data->bsize = 0;
	data->stackb = NULL;
}

static void fill_stack(int ac, char  **av, t_data *data)
{
    char **split;
    int i;
    int j;
    int k;
    long n;
    
    i = 1;
    k = 0;
    while (i < ac)
    {
        j = 0;
        split = ft_split(av[i], ' ');
        while (split[j])
        {
                n = atoll(split[j]);
                if (n > 2147483647 || n < -2147483648)
			        exit_error(data);
                data->stacka[k] = ft_atoi(split[j]);
                j++;
                k++;
        }
        i++;
    }
}

static void check_doubel(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->asize)
	{
		j = i + 1;
		while (j < data->asize)
		{
			if (data->stacka[j] == data->stacka[i])
				exit_error(data);
			j++;
		}
		i++;
	}
}

void get_stack(int ac, char **av, t_data *data)
{   
    check_digit(ac, av, data);
    get_len(ac, av, data);
    data_init(data);
    fill_stack(ac, av, data);
    check_doubel(data);
}