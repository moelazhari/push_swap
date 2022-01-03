/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:07:43 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/10 23:36:32 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1)
		return (NULL);
	if (!s2)
		return (ft_strdup((char *)s1));
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_memmove(str, s1, ft_strlen(s1));
	ft_memmove(str + ft_strlen(s1), s2, ft_strlen(s2));
	ft_bzero(str + ft_strlen(s1) + ft_strlen(s2), 1);
	return (str);
}
