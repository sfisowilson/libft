#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *local_s;

	i = 0;
	local_s = (unsigned char *)s;
	
	while (i < n)
	{
		if (local_s[i] == c)
			return ((unsigned char*)s + i + 1);
		i++;
	}
	return (NULL);
}
