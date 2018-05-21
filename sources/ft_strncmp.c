#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*l_s1;
	unsigned char	*l_s2;
	size_t		i;

	l_s1 = (unsigned char*)s1;
	l_s2 = (unsigned char*)s2;
	i = 0;
	while ((l_s1[i] == l_s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (l_s1[i] - l_s2[i]);
}
