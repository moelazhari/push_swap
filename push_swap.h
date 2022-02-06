/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:49:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/06 15:49:24 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
 
typedef struct s_stack
{
	int	top;
	int	*tab;
}				stack;

void	check_digit(int ac, char **str);
void	get_stack(int ac, char **av, stack *a, stack *b);
void	exit_error(stack *a, stack *b);
long	ft_atoll(const char *str);
int		check_is_sort(stack *stack);
/*
int		get_big(int *arr, int len);
int		get_small(int *arr,int len, int *index);
void	sort(t_data *data);
void	big_sort(t_data *data);
void	min_sort(t_data *data);
void	get_instructions(t_data *data);
*/
void	convert_index(stack *s);
void	algo(stack *a, stack *b);
void	sa(stack *a);
void	sb(stack *b);
void	ss(stack *a, stack *b);
void	pa(stack *a, stack *b);
void	pb(stack *a, stack *b);
void	ra(stack *a);
void	rb(stack *a);
void	rr(stack *a, stack *b);
void	rra(stack *a);
void	rrb(stack *a);
void	rrr(stack *a, stack *b);

#endif
