/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:24:50 by swilson           #+#    #+#             */
/*   Updated: 2018/05/29 07:21:18 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	split(char *s, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
		{
			j = 1;
			i++;
		}
	}
	if ((j == 1) && (count == 0))
		count = 1;
	return (count);
}

static char	**make_string(char *s, int count, char **ret, char c)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	while (i < (count - 1))
	{
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

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		count;
	char	*l_s;

	if (!s)
		return (NULL);
	l_s = (char*)s;
	count = split(l_s, c);
	if (!(ret = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	ret = make_string(l_s, count + 1, ret, c);
	return (ret);
}
