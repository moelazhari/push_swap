/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:13:10 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/06 17:15:00 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (cpy_s1[i] == cpy_s2[i] && i < n - 1)
		i++;
	return (cpy_s1[i] - cpy_s2[i]);
}
