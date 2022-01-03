/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:14:24 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/12 12:22:53 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	i = n;
	if (i <= 9)
	{
		ft_putchar_fd(i + '0', fd);
	}
	else
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}
