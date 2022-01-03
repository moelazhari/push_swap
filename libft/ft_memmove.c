/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:51:20 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/06 17:08:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cpy_dst;
	unsigned char	*cpy_src;

	cpy_dst = (unsigned char *)dst;
	cpy_src = (unsigned char *)src;
	if (!cpy_dst && !cpy_src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			cpy_dst[len] = cpy_src[len];
	}
	return (dst);
}
