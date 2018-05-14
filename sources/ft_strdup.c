#include "libft.h"
#include <stdlib.h>

char 	*ft_strdup(const char *str)
{
	char *dup;
	size_t len;
	int i;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}
