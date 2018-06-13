#include <stdlib.h>

char	*ft_realloc(char **str, int n)
{
	char	*temp;
	int		i;

	i = -1;
	temp = (char*)malloc(sizeof(char) * n);

	while ((*str)[++i] != '\0')
		temp[i] = (*str)[i];
	temp[i] = '\0';
	free(str);
	return (temp);
}
