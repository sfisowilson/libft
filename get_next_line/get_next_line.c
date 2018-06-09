/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:35:09 by swilson           #+#    #+#             */
/*   Updated: 2018/06/07 11:55:27 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> //remove
#include "get_next_line.h"

static int	doesitfit(char *temp)
{
	while (*temp)
	{
		if (*temp == '\n')
			return (1);
		temp++;
	}
	return (0);
}

static void	setline(char **temp, char **line)
{
	int	i;

	while ((*temp)[i] != '\n' && (*temp)[i] != '\0')
		i++;
	*line = (char*)malloc(sizeof(char) * i + 1);
	i = 0;
	while ((*temp)[i] != '\n' && (*temp)[i] != '\0')
	{
		(*line)[i] = (*temp)[i];
		i++;
	}
	(*line)[i] = '\0';
	if (!(*temp = ft_strsub(*temp, ft_strlen(*line) + 1, ft_strlen(*temp))))
		return (0);
}

int			get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*temp;
	char		buf[BUFF_SIZE + 1];

	if (fd < 0)
		return (-1);
	if (!temp)
		temp = ft_strnew(1);
	while (1)
	{
		if (!doesitfit(temp) || !temp)
		{
			if ((ret = read(fd, buf, BUFF_SIZE)) > 0)
			{
				buf[ret] = '\0';
				temp = ft_strjoin(temp, buf);
			}
			else
			{
				return (ret);
			}
		}
		else if (doesitfit(temp))
		{
			printf(" temp address %p\n", temp);
			setline(&temp, line);
			return (1);
		}
	}
	return (1);
}
/*
int main(void)
{
	int fd;
	char *line;
	int i;

	printf("with the buffer size = %d\n", BUFF_SIZE);

	i = 1;
	fd = open("test.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%i,  %s\n", i++, line);
	}
	return (0);
}
*/
