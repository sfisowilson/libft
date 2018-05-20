#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *local_dest;
	unsigned char *local_src;

	local_dest = (unsigned char *)dest;
	local_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		local_dest[i] = local_src[i];
		if (local_src[i] == c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
