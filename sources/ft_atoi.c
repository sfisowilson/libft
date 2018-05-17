#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] ==  '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
		ret = ret * 10 + (str[i++] - '0');
	return (ret * sign);
}
