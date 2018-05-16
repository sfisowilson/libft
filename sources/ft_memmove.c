#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *local_dest, *local_src, *temp;
	size_t i;

	local_dest = (char *)dest;
	local_src = (char *)src;
	i = 0;
	if (src < dest)
		temp = (char*)malloc(sizeof(char) * ft_strlen(local_src));
	else
		temp = (char*)malloc(sizeof(char) * ft_strlen(local_dest));
	while (i < n)
	{
		temp[i] = local_src[i];
		i++;
	
	}
	temp[i] = '\0';
	(char *)dest = temp;
	return (dest);
}
