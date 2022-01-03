/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:43:11 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/09 17:42:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	beginninig_s1(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int	ending_s1(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = beginninig_s1(s1, set);
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ending_s1(s1, set);
	str = (char *)malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memmove(str, s1 + i, (j - i + 1));
	ft_bzero(str + (j - i + 1), 1);
	return (str);
}
