/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:49:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/04 14:52:13 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./gnl/get_next_line.h"	
# include "../libft/libft.h"
# include <stdio.h>
 
typedef struct s_data
{
	int	lena;
	int	*stacka;
	int	lenb;
	int	*stackb;
}				t_data;

void	check_digit(int ac, char **str);
void	get_stack(int ac, char **av, t_data *data);
void	exit_error(t_data *data);
long	ft_atoll(const char *str);
int		check_is_sort(t_data *data);
int		get_big(int *arr, int len);
int		get_small(int *arr,int len, int *index);
void	sort(t_data *data);
void	big_sort(t_data *data);
void	min_sort(t_data *data);
void	get_instructions(t_data *data);
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

#endif
