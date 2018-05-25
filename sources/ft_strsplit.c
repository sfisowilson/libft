#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int split(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;	
		}
		i++;
	}
	printf("\n%d\n", count);
	return (count);
}
//remove strsub

static char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;
	char	*str;

	if (!s)
		return (NULL);
	if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = start;
	j = 0;
	str = (char*)s;
	while (j < len)
	{
		ret[j] = str[j + i];
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

static char	**make_string(char *s, int count, char **ret, char c)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	printf("\ncount == %d\n" , count);
	printf("%s.........%c..\n", s, c);
	while (i < (count - 1))
	{
		printf("\ni === %d", i);
		if (s[j] != c && s[j] != '\0')
		{
			k = 0;
			while (s[j + k] != '\0' && s[j + k] != c)
			{
				k++;
			}
			ret[i] = ft_strsub(s, j, k);
			j += k;
			i++;
		}
		else
			j++;
	}
	ret[i] = NULL;

	return (ret);
}

char ** ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		count;
	char	*l_s;

	l_s = (char*)s;
	count = split(l_s, c);
	ret = (char**)malloc(sizeof(char*) * count + 1);
	printf("\nbefore make_string\n");
	ret = make_string(l_s, count + 1, ret, c);
	printf("\nafter make string\n");
	return (ret);
}
int main(void)
{
	char s[] = "Hi my name is chocolate brown sugar";
	char c = ' ';
	printf("\n%s  ===\t%c\n", s, c);
	char **arr = ft_strsplit(s, c);
	int i;
	int j;

	i = 0;
	j = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			printf("%c", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
