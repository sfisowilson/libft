#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *local_dest;
	unsigned char *local_src;

	i = 0;
	local_dest = (unsigned char *)dest;
	local_src = (unsigned char *)src;
	while (i < n)
	{
		local_dest[i] = local_src[i];
		i++;
	}
	return (dest);
}
