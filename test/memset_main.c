/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:36:39 by swilson           #+#    #+#             */
/*   Updated: 2018/05/21 10:42:06 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
/* ////////////////1     ft_memset ////////////////
	ft_putstr("memset\n");
	char	s[] = "hello there";
	char	c = '#';
	size_t	n = 7;
	//ft_putstr(memset(s, c, n));
	ft_putchar('\n');
	ft_putstr(ft_memset(s, c, n));
	ft_putstr("\n\n");
	//////////////// end memset ///////////// */
	
	/*////////////////1     ft_bzero ////////////////
	ft_putstr("bzero\n");
	char	s[] = "hello there";
	size_t	n = 7;
	bzero(s, n);
	ft_putstr(s);
	ft_putchar('\n');
	ft_bzero(s, n);
	ft_putstr(s);
	ft_putstr("\n\n");
	//////////////// end bzero ///////////// */

	/*////////////////1     ft_memcpy ////////////////
	ft_putstr("memcpy\n");
	char	d[] = "hello good people of south africa";
	char	s[] = "hello there iiiiiiiiiiiiiiiiiiiiii";
	size_t	n = ft_strlen(s);
	ft_putstr(memcpy(d, s, n));
	ft_putchar('\n');
	ft_putstr(ft_memcpy(d, s, n));
	ft_putstr("\n\n");
	//////////////// end memcpy ///////////// */

	/*////////////////1     ft_memccpy ////////////////
	ft_putstr("memccpy\n");
	char	d[] = "hello good people of south africa";
	char	s[] = "hello there iiiiiiiiiiiiiiiiiiiiii";
	char	c = 'i';
	size_t	n = ft_strlen(s);
	ft_putstr(memccpy(d, s, c, n));
	ft_putchar('\n');
	ft_putstr(ft_memccpy(d, s, c, n));
	ft_putstr("\n\n");
	//////////////// end memccpy ///////////// */

	/*////////////////1     ft_memmove ////////////////
	ft_putstr("memmove\n");
	char	d[] = "hello good people of south africa";
	char	s[] = "hello there iiiiiiiiiiiiiiiiiiiiii";
	size_t	n = ft_strlen(s);
	ft_putstr(memmove(d, s, c, n));
	ft_putchar('\n');
	ft_putstr(ft_memmove(d, s, c, n));
	ft_putstr("\n\n");
	//////////////// end memmove ///////////// */
	
	
	return (0);

}
