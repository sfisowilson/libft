int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\0') || (c == '\n') || (c == '\t') || (c == '\r') || (c == '\f'))
	{
		return (1);
	}
	return (0);
}
