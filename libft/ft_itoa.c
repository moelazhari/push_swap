/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:54 by mazhari           #+#    #+#             */
/*   Updated: 2022/01/02 20:17:27 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_c(long c)
{
	int	rus;

	rus = 0;
	if (c <= 9)
		return (1);
	else if (c < 0)
		c = -c;
	while (c)
	{
		rus++;
		c /= 10;
	}
	return (rus);
}

static char	*fill_str(char *str, int len_str, long n, int sing)
{
	str[--len_str] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (n)
	{
		str[--len_str] = (n % 10) + '0';
		n /= 10;
	}
	if (sing == -1)
		str[--len_str] = '-';
	return (str);
}

char	*ft_itoa(int c)
{
	long	n;
	char	*str;
	int		len_str;
	int		sing;

	n = c;
	len_str = 0;
	if (n < 0)
	{
		sing = -1;
		n = -n;
		len_str++;
	}	
	len_str += len_c(n) + 1;
	str = (char *)malloc(len_str * sizeof(char));
	if (!str)
		return (NULL);
	str = fill_str(str, len_str, n, sing);
	return (str);
}
