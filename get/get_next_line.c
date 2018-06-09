/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 07:31:06 by swilson           #+#    #+#             */
/*   Updated: 2018/06/08 13:03:21 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_list	*file_select(t_list **file, int fd)
{
	t_list *temp;

	temp = *file;
	while (temp)
	{
		if (temp->content_size == (size_t)fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("\0", fd);
	ft_lstadd(file, temp);
	return (temp);
}

static	int cpy_till(char **line, char *content, int c)
{
	int i;

	i = 0;
	while ((content[i] != c) && (content[i] != '\0'))
	{
		(*line)[i] = content[i];
		i++;
	}
	return (i);
}

int		get_next_line(int fd, char **line)
{
	t_list			*node;
	static t_list	*file;
	int 			ret;
	size_t			count;
	char			buf[BUFF_SIZE + 1];
	int				flag;

	flag = 1;
	node = file_select(&file, fd);
	if (!(*line = ft_strnew(1)) || fd < 0)
	{
		return (-1);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		node->content = ft_strjoin(node->content, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
		if ((ret < BUFF_SIZE) && !ft_strlen(node->content))
		{
			return (0);
		}
		count = cpy_till(line, node->content, '\n');
		if (ft_strchr(node->content, '\n'))
			flag = 0;
		if ((count != ft_strlen(node->content) && count > 0) && !flag)
		{
			node->content = node->content + (count + 1);
			return (1);
		}
			ft_strclr(node->content);
	return (0);
}
