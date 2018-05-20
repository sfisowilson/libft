#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *h, const char *n)
{
	int i, j, len;
	char * temp;

	i = 0;
	while (h[i] != '\0')
	{
		if ((h[i] == n[j]) && (n[j] != '\0'))
		{
			len = ft_strlen(n) - i;
			temp = (char*)malloc(sizeof(char) * len);
			while ((n[j] != '\0') && (h[i + j] != '\0'))
			{
				temp[j] = h[i+j];
				//still work to be done!!
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
