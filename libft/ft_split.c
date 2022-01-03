/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:22:26 by mazhari           #+#    #+#             */
/*   Updated: 2021/11/12 14:22:44 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static char	**ft_free(char **words, int i)
{
	while (i >= 0)
	{
		i--;
		free(words[i]);
	}
	free(words);
	return (NULL);
}

static char	**ft_malloc(char **words, char const *s, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < len)
	{
		k = 0;
		while (s[j] && s[j] != c)
		{
			k++;
			j++;
		}
		if (k != 0)
		{
			words[i] = (char *)malloc((k + 1) * sizeof(char));
			if (!words[i])
				return (ft_free(words, i));
			i++;
		}
		j++;
	}
	words[len] = NULL;
	return (words);
}

static void	fill_words(char **words, char const *s, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < len && s[j])
	{
		k = 0;
		if (s[j] != c)
		{
			while (s[j] && s[j] != c)
			{
				words[i][k] = s[j];
				j++;
				k++;
			}
			words[i][k] = '\0';
			i++;
		}
		else
			j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		len;

	if (!s)
		return (NULL);
	len = nbr_words(s, c);
	words = (char **)malloc((len + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words = ft_malloc(words, s, c, len);
	if (!words)
		return (NULL);
	fill_words(words, s, c, len);
	return (words);
}
