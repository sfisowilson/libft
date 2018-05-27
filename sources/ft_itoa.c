/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:02:01 by swilson           #+#    #+#             */
/*   Updated: 2018/05/25 14:02:09 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count(int n)
{
	int len;
	int num;

	num = n;
	len = 1;
	while (num /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*ret;

	sign = 0;
	len = count(n);
	printf("count = %d\n", len);
	if (n < 0)
		sign = 1;
	if (!(ret = (char*)malloc(sizeof(char) * len + sign + 1)))
		return (NULL);
	if (sign)
	{
		len += sign;
		ret[0] = '-';
		n *= -1;
	}
	ret[len] = '\0';
	ret[--len] = n % 10 + '0';
	while (n /= 10)
	{
		ret[--len] = n % 10 + '0';
		printf("ret[%d] = %c\n", len, ret[len]);
	}
	return (ret);
}

int	main(void)
{
	printf("char return value is = %s\n", ft_itoa(-6));
	return (0);
}
