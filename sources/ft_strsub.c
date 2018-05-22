/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:20:04 by swilson           #+#    #+#             */
/*   Updated: 2018/05/22 15:04:13 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t 	j;
	size_t	local_len;
	char	*ret;

	i = 0;
	local_len = ft_strlen(s);
	while (s[i] != (char)start)
		i++;
	local_len -= i;
	if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = 0;
	while ((s[i] != '\0') && (len > 0))
	{
		ret[j] = s[i];
		i++;
		j++;
		len--;
	}
	ret[j] = '\0';
	return (ret);
}
