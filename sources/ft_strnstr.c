#include "libft.h"
#include <stdlib.h>
///////////////////////////////////////////////remove header////////////
#include <stdio.h>

char	*ft_strnstr(const char *h, const char *n, size_t c)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;

	if (n[i] == '\0')
		return ((char *)h);
	len = ft_strlen(n);
	while ((h[i] != '\0') && (c >= len))
	{
		j = 0;
		if ((h[i] == n[j]) && (ft_strncmp(h + i, n, len) == 0))
		{
			printf("\nh[%lu] = %c, n[%lu] = %c\n", i, h[i], j, n[j]);
			return ((char *)h + i);
		}
		ft_putnum(ft_strncmp(h+i, n, len));
		i++;
		//c--;
	}
	return (NULL);
}
