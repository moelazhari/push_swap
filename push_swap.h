/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:49:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/04 13:52:19 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>

typedef struct s_data
{
	int	lena;
	int	*stacka;
	int	lenb;
	int	*stackb;
}	          t_data;

void	get_stack(char **split,t_data *data);
void	exit_error (t_data *data);
long	ft_atoll(const char *str);
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
void	sort_min(t_data *data);
void	sort_mide(t_data *data);
void	sort_max(t_data *data);

#endif


