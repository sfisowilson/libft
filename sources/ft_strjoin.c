/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:33:40 by swilson           #+#    #+#             */
/*   Updated: 2018/05/23 09:42:11 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		i;
	int		j;
	int		len;
	char	*ret;
	char	*lstr1;
	char	*lstr2;

	lstr1 = (char*)str1;
	lstr2 = (char*)str2;
	i = -1;
	j = -1;
	len = ft_strlen(lstr1) + ft_strlen(lstr2);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (lstr1[++i] != '\0')
		ret[i] = lstr1[i];
	while (lstr2[++j] != '\0')
		ret[i + j] = lstr2[j];
	ret[i + j] = '\0';
	ft_putchar(ret[len]);
	return (ret);
}
