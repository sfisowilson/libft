/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:27:03 by swilson           #+#    #+#             */
/*   Updated: 2018/05/24 14:54:31 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
