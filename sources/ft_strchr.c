/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:37:42 by swilson           #+#    #+#             */
/*   Updated: 2018/05/18 15:03:17 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			len = ft_strlen(s) - i;
			temp = (char*)malloc(sizeof(char) * len);
			while (s[i + j] != '\0')
			{
				temp[j] = s[i + j];
				j++;
			}
			return (temp);
		}
		i++;
	}
	return (NULL);
}
