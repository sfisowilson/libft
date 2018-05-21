#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *h, const char *n)
{
	int i;

	i = 0;
	while ((h[i] != '\0') && (n[i] != '0'))
	{
		if (h[i] == n[i])
		{
			if (ft_strcmp(h + i, n) == 0)
			{
				return ((char *)h + i);
			}
		}
		i++;
	}
	return (NULL);
}
