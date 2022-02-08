/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:49:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/02/08 16:19:09 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "./gnl/get_next_line.h" 
 
typedef struct s_stack
{
	int	top;
	int	*tab;
}				stack;

void	check_digit(int ac, char **str, stack *a, stack *b);
void	get_stack(int ac, char **av, stack *a, stack *b);
long	ft_atoll(const char *str);
int		check_is_sort(stack a);
void	exit_error(stack *a, stack *b);
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