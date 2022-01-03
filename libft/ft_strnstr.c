/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:25:53 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/11 00:05:21 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack[0])
		return (NULL);
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j]
				&& i + j < len)
			{
				if (!(needle[j + 1]))
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
