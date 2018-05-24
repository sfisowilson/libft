/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:06:55 by swilson           #+#    #+#             */
/*   Updated: 2018/05/23 16:25:38 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	howmany(char *s, char c)
{
	int count;
	int i;

	count = 1;
	i = 0;
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

	return (count);
}

static int	*linelen(int *arr, char *str, char c)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (j > 0)
			{
				arr[k] = j;
				j = 0;
				k++;
			}
			while (str[i] == c)
				i++;
		}
		j++;
		i += j;
	}
	return (arr);
}

static	char	**splitting(char **ret, int *len, int count, char *str, char c)
{
	int i;
	int j;
	int k;

	ret = (char**)malloc(sizeof(char*) * count + 1);
	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			k = 0;
			ret[j] = (char*)malloc(sizeof(char) * len[j] + 1);
			while (str[i] != c)
			{
				ret[j][k] = str[i];
				i++;
				k++;
			}
			ret[j][k] = '\0';
			j++;
		}
		i++;
	}
	ret[count][0] = '\0';
	return (ret);
}

char	**ft_strsplit(const char *s, char c)
{
	int		count;
	int		*str_len;
	char	*str;
	char	**ret;

	str = (char*)s;
	count = howmany(str, c);
	if (!(str_len = (int*)malloc(sizeof(int) * count + 1)))
		return (NULL);
	str_len = linelen(str_len, str, c);
	ret = splitting(ret, str_len, count, str, c);
	return (ret);
}
