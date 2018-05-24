/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:38:46 by swilson           #+#    #+#             */
/*   Updated: 2018/05/22 13:09:24 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>			//remove

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t dest_len;
	size_t src_len;

	dest_len = strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dest_len <=n)
		return (dest_len + src_len);
	while (dest[dest_len +i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest_len);
}
