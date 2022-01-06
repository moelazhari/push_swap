/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:49:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/06 10:44:37 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
 
typedef struct s_data
{
	int	lena;
	int	*stacka;
	int	lenb;
	int	*stackb;
}				t_data;

void	get_stack(int ac, char **av, t_data *data);
void	exit_error(t_data *data);
long	ft_atoll(const char *str);
int		check_is_sort(t_data *data);
int		get_max(int *arr, int len);
int		get_small(int *arr,int len);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	sort(t_data *data);

#endif
