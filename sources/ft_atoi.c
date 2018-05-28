/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:14:41 by swilson           #+#    #+#             */
/*   Updated: 2018/05/28 13:06:11 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\0') || (c == '\n') || (c == '\v') ||\
			(c == '\t') || (c == '\r') || (c == '\f'))
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int			i;
	long long	ret;
	int			sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		ret = ret * 10 + (str[i++] - '0');
		if ((ret > 2147483648) && sign == 1)
			return (-1);
		else if ((ret > 2147483648) && sign == -1)
			return (0);
	}
	return (ret * sign);
}
