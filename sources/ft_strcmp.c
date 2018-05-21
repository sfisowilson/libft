int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*l_s1;
	unsigned char	*l_s2;
	int		i;

	l_s1 = (unsigned char*)s1;
	l_s2 = (unsigned char*)s2;
	i = 0;
	while ((l_s1[i] == l_s2[i]) && ((l_s1[i] || l_s2[i]) != '\0'))
	{
		i++;
	}
	return (l_s1[i] - l_s2[i]);
}
