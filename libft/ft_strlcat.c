/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:51:54 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/06 16:20:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;	

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	i = 0;
	if (dstsize <= size_dest)
		return (dstsize + size_src);
	else
	{
		while (src[i] && size_dest + i < dstsize - 1)
		{
			dst[size_dest + i] = src[i];
			i++;
		}
		dst[size_dest + i] = '\0';
		return (size_dest + size_src);
	}	
}
