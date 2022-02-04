/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:57:13 by mazhari           #+#    #+#             */
/*   Updated: 2021/12/27 17:00:53 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fill_line(char **str, char *line)
{
	char	*forfree;
	int		i;

	i = 0;
	forfree = *str;
	while ((*str)[i] != '\n' && (*str)[i] != '\0')
		i++;
	if ((*str)[i] == '\n')
	{
		line = ft_substr(*str, 0, i + 1);
		*str = ft_strdup(*str + i + 1);
	}
	else
	{
		line = ft_strdup(*str);
		*str = NULL;
	}
	free(forfree);
	return (line);
}

int	fill_str(int fd, char **str)
{	
	char	*buf;
	char	*forfree;
	int		bayts;

	buf = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!buf)
		return (-1);
	bayts = 1;
	while (!ft_strchr(*str, '\n') && bayts)
	{
		bayts = read(fd, buf, BUFFER_SIZE);
		if (bayts < 0)
		{
			free(buf);
			return (-1);
		}
		buf[bayts] = '\0';
		forfree = *str;
		*str = ft_strjoin(*str, buf);
		free(forfree);
	}
	free(buf);
	return (bayts);
}

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		*line;
	int			bayts;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	bayts = fill_str(fd, &str);
	line = fill_line(&str, line);
	if (bayts <= 0 && !line[0])
	{
		free (line);
		return (NULL);
	}
	return (line);
}
