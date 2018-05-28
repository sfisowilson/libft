/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sf_putchar_uni.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:31:46 by swilson           #+#    #+#             */
/*   Updated: 2018/05/28 14:34:14 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	sf_putchar_uni(char c)
{
	int print[2];

	if (ft_isascii(c))
		write(1, &c, 1);
	else
	{
		ft_memcpy((char*)print, "\u00F8", 2);
		print[1] = c;
		write(1, print, 2);
	}
}
