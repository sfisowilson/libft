/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:25:36 by swilson           #+#    #+#             */
/*   Updated: 2018/05/21 11:15:16 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*local_dest;
	unsigned char	*local_src;
	char		*temp;

	i = 0;
	local_dest = (unsigned char *)dest;
	local_src = (unsigned char *)src;
	temp = (char*)malloc(sizeof(char) * n);
	while (i < n)
	{
		temp[i] = local_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		local_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
