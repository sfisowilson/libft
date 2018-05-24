/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:38:46 by swilson           #+#    #+#             */
/*   Updated: 2018/05/24 10:29:10 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>			//remove

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	char	*lsrc;

	dest_len = strlen(dest);
	src_len = strlen(src);
	lsrc = (char*)src;
	i = 0;
//§	printf(" %lu", (n - dest_len - 1));
	if (dest_len > n)
		return (n + src_len);
	else
	{
		while ((lsrc[i] != '\0')  && (i < (n - dest_len - 1)))
		{
			if (i < n - dest_len - 1)
				dest[dest_len + i] = lsrc[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	//printf("len %lu\n", strlen(dest));
	return (strlen(dest));
}
/*
int	main(void)
{
	char *s = "the cake is a lie !\0I'm hidden lol\r\n";
	char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";

	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

	char r[10] = " you";
	char r1[10] = " you";

	//printf("strlcat = %lu\n", strlcat(s, r, max));
	printf("ft_strlcat = %lu\n", ft_strlcat(s1, r1, 47));

	return (0);
}*/
