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

	printf("-- %d --", n);
	sign = 0;
	len = count(n);
	if (n < 0)
		sign = 1;
	len += sign;
	if (!(ret = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	//ret[len] = '\0';
	ret[--len] = n % 10 + '0';
	printf(" %d / ", n);
	while (n /= 10)
	{
		printf(" %d ", len);
		ret[--len] = n % 10 + '0';
	}
	if (sign)
		ret[len] = '-';
	return (ret);
}
