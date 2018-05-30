/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:44:25 by swilson           #+#    #+#             */
/*   Updated: 2018/05/29 15:28:39 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"
#include "libft.h"
#include <stdio.h>
void	cutting(void)
{
	ft_putchar('\n');
	ft_putstr("<------------------------------**--------------------------------->");
	ft_putchar('\n');
}

	/*
	 *-------------------------------
	 *		MEMSET TEST
	 *------------------------------
	 */

static void		test_memset(const int size, int c)
{
	char		s1[40] = STRING_2;
	char		s2[40] = STRING_2;

	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("MEMSET \t=%s\n", memset(s1, c, size));
	printf("FT_MEMSERT \t=%s\n", ft_memset(s2, c, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		BZERO TEST
	 *------------------------------
	 */

static void		test_bzero(const int size)
{
	char		s1[40] = STRING_2;
	char		s2[40] = STRING_2;
	printf("s1 = %s\ns2 = %s\n", s1, s2);

	bzero(s1, size);
	ft_bzero(s2, size);

	printf("BZERO \t= %s\n", s1);
	printf("FT_BZERO \t= %s\n", s2);
	cutting();
}

	/*
	 *-------------------------------
	 *		MEMCPY TEST
	 *------------------------------
	 */

static void		test_memcpy(char *src, size_t size)
{
	char		dest1[100] = "test your memcpy and make sure it works!!!/n";
	char		dest2[100] = "test your memcpy and make sure it works!!!/n";
	
	printf("\ndest = %s\nsrc = %s\nsize = %lu\n\n", dest1, src, size);

	printf("MEMCPY \t\t= %s\n", memcpy(dest1, src, size));
	printf("FT_MEMCPY \t= %s\n", ft_memcpy(dest2, src, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		MEMCCPY TEST
	 *------------------------------
	 */

static void		test_memccpy(char *src, int c, size_t size)
{
	char		dest1[100] = "test your memccpy and make sure it works!!!/n";
	char		dest2[100] = "test your memccpy and make sure it works!!!/n";
	
	printf("\ndest = %s\nsrc = %s\nsize = %c\nchar = %lu\n\n", dest1, src, c, size);

	printf("MEMCCPY \t= %s\n", memccpy(dest1, src, c, size));
	printf("FT_MEMCCPY \t= %s\n", ft_memccpy(dest2, src, c, size));
	cutting();
	}

	/*
	 *-------------------------------
	 *		MEMMOVE TEST
	 *------------------------------
	 */

static void		test_memmove(char *src, size_t size)
{
	char		dest1[100] = "test your memmove and make sure it works!!!/n";
	char		dest2[100] = "test your memmove and make sure it works!!!/n";
	
	printf("\ndest = %s\nsrc = %s\nsize = %lu\n\n", dest1, src, size);

	printf("MEMMOVE \t= %s\n", memmove(dest1, src, size));
	printf("FT_MEMMOVE \t= %s\n", ft_memmove(dest2, src, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		MEMCHR TEST
	 *------------------------------
	 */

static void		test_memchr(int c, size_t size)
{
	char		dest1[100] = "test your memchr and make sure it works!!!/n";
	char		dest2[100] = "test your memchr and make sure it works!!!/n";
	
	printf("\ndest = %s\nsrc = %c\nc = %lu\n\n", dest1, c, size);

	printf("MEMCHR \t\t= %s\n", memchr(dest1, c, size));
	printf("FT_MEMCHR \t= %s\n", ft_memchr(dest2, c, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		MEMCMP TEST
	 *------------------------------
	 */

static void		test_memcmp(char *src, size_t size)
{
	char		dest1[100] = "test your memcmp and make sure it works!!!/n";
	char		dest2[100] = "test your memcmp and make sure it works!!!/n";
	
	printf("\ndest = %s\nsrc = %s\nsize = %lu\n\n", dest1, src, size);

	printf("MEMCMP \t\t= %d\n", memcmp(dest1, src, size));
	printf("FT_MEMCMP \t= %d\n", ft_memcmp(dest2, src, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		STRLEN TEST
	 *------------------------------
	 */

static void		test_strlen(char *src)
{
	//char		dest1[100] = "test your strlen and make sure it works!!!/n";
	//char		dest2[100] = "test your strlen and make sure it works!!!/n";
	
	printf("src = %s\n\n", src);

	printf("STRLEN \t\t= %lu\n", strlen(src));
	printf("FT_STRLEN \t= %lu\n", ft_strlen(src));
	cutting();
}

	/*
	 *-------------------------------
	 *		STRDUP TEST
	 *------------------------------
	 */

static void		test_strdup(char *src)
{
	//char		dest1[100] = "test your strdup and make sure it works!!!/n";
	//char		dest2[100] = "test your strdup and make sure it works!!!/n";
	
	printf("src = %s\n\n", src);

	printf("STRDUP \t\t= %s\n", strdup(src));
	printf("FT_STRDUP \t= %s\n", ft_strdup(src));
	cutting();
}

	/*
	 *-------------------------------
	 *		STRCPY TEST
	 *------------------------------
	 */

static void		test_strcpy(char *src)
{
	char		dest1[100] = "test your strcpy and make sure it works!!!/n";
	char		dest2[100] = "test your strcpy and make sure it works!!!/n";
	
	printf("src = %s\ndest = %s\n\n", dest1, src);

	printf("STRCPY \t\t= %s\n", strcpy(dest1, src));
	printf("FT_STRCPY \t= %s\n", ft_strcpy(dest2, src));
	cutting();
}

	/*
	 *-------------------------------
	 *		STRNCPY TEST
	 *------------------------------
	 */

static void		test_strncpy(char *src, size_t size)
{
	char		dest1[100] = "test your strncpy and make sure it works!!!/n";
	char		dest2[100] = "test your strncpy and make sure it works!!!/n";
	
	printf("src = %s\ndest = %s\nsize = %lu\n\n", dest1, src,size);

	printf("STRNCPY \t= %s\n", strncpy(dest1, src, size));
	printf("FT_STRNCPY \t= %s\n", ft_strncpy(dest2, src, size));
	cutting();
}

	/*
	 *-------------------------------
	 *		STRCAT TEST
	 *------------------------------
	 */

static void		test_strcat(char *src)
{
	char		dest1[100] = "test your strcat and make sure it works!!!/n";
	char		dest2[100] = "test your strcat and make sure it works!!!/n";
	
	printf("src = %s\ndest = %s\n\n", dest1, src);

	printf("STRCAT \t\t= %s\n", strcat(dest1, src));
	printf("FT_STRCAT \t= %s\n", ft_strcat(dest2, src));
	cutting();	
}

	/*
	 *-------------------------------
	 *		STRNCAT TEST
	 *------------------------------
	 */

static void		test_strncat(char *src, size_t size)
{
	char		dest1[100] = "test your strncat and make sure it works!!!/n";
	char		dest2[100] = "test your strncat and make sure it works!!!/n";
	
	printf("src = %s\ndest = %s\nsize = %lu\n\n", dest1, src, size);

	printf("STRNCAT \t= %s\n", strncat(dest1, src, size));
	printf("FT_STRNCAT \t= %s\n", ft_strncat(dest2, src, size));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRLCAT TEST
	 *------------------------------
	 */

static void		test_strlcat(char *src, size_t size)
{
	char		dest1[100] = "test your strlcat and make sure it works!!!/n";
	char		dest2[100] = "test your strlcat and make sure it works!!!/n";
	
	printf("src = %s\ndest = %s\nsize = %lu\n\n", dest1, src, size);

	printf("STRLCAT \t= %lu\n", strlcat(dest1, src, size));
	printf("FT_STRLCAT \t= %lu\n", ft_strlcat(dest2, src, size));

	ft_putchar('\n');
	cutting();
}




int	main(void)
{
	test_memset(10, '+');
	test_bzero(2);
	test_memcpy(".........", 6);
	test_memccpy("abcdefghijklmno", 'o', 15);
	test_memmove("second string here!", 12);
	test_memchr('d', 40);
	test_memcmp("test", 20);
	test_strlen("How long am I?\n");
	test_strdup("are you sure you are looking at me?");
	test_strcpy("cool! ........................................................");
	test_strncpy("cool! I told you this was easy!!!", 20); 
	test_strcat("cool! I told you this was easy!!!");
	test_strncat("cool! I told you this was easy!!!", 15);	
	test_strlcat("cool! I told you this was easy!!!", 30);
	
	return (0);
}
