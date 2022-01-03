/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:52:07 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/10 23:08:50 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t			i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (c_s1[i] && c_s2[i] && c_s1[i] == c_s2[i] && i < n - 1)
		i++;
	return (c_s1[i] - c_s2[i]);
}		
