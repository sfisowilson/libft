#include <fcntl.h>
#include "../get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int fd;
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		char *line;
		while (get_next_line(fd, &line))
		{
			printf("%s\n", line);
		}
	}
	return (0);
}
