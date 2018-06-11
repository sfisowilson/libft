#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

static t_list	*fileselector(t_list **file, int fd)
{
	t_list *temp;

	temp = *file;
	while (temp)
	{
		if ((int)temp->next = fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("\0", fd);
	ft_lstadd(file, temp);
	temp = *file;
	return (temp);
}

static int	makeline(char **line, char *node)
{
	int i;

	while ((node[i] != '\n') || (node[i] != '\0'))
		i++;
	*line = ft_strsub(node, 0, i);
	return (i);
}

int	get_next_line(const int fd, char **line)
{
	static t_list	*file;
	t_list		*node;
	int		ret;
	int		count;
	char		buf[BUFF_SIZE + 1];
	char		*temp;

	if ((fd < 0) || !line || ((ret = read(fd, buf, 0)) < 0))
		return (-1);
	node = fileselector(&file, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		temp = (char*)node->content;
		node->content = ft_strjoin(node->content, buf);
		free(temp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if ((ret < BUFF_SIZE) && (ft_strlen(node->content) == 0))
		return (0);
	count = makeline(line, (char*)node->content);
	if ((int)ft_strlen((char*)node->content) > count)
		node->content = node->content + (count + 1);
	else
		ft_strclr(node->content);
	return (1);
}
