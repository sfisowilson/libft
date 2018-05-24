/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:42:43 by swilson           #+#    #+#             */
/*   Updated: 2018/05/24 16:11:48 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *ft_strtrim(const char *s)
{
	char	*ret;
	char	*str;
	int 	i;
	int		j;
	int		len;
    
    str = (char*)s;
    len = ft_strlen(str);
    j = 0;
    i = 0;
    if (s == 0)
        return (NULL);
    while (((ft_isspace(str[i])) || (ft_isspace(str[len]))) && (i <= len))
    {
        if (ft_isspace(str[i]))
            i++;
        if (ft_isspace(str[len]))
            len--;
    }
    len -= i;
    if (!(ret = (char*)malloc(sizeof(char) * len + 2)))
        return (NULL);
    while (j <= len)
    {
        ret[j] = str[i + j];
        j++;
    }
    ret[j] = '\0';
    return (ret);
}
