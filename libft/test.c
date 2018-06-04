/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:44:25 by swilson           #+#    #+#             */
/*   Updated: 2018/06/01 11:07:10 by swilson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void	cutting(void)
{
	ft_putchar('\n');
	ft_putstr("<----------------------------**---------------------------->");
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

	/*
	 *-------------------------------
	 *		STRCHR TEST
	 *------------------------------
	 */

static void		test_strchr(char *src, int c)
{
	//char		dest1[100] = "test your strchr and make sure it works!!!/n";
	//char		dest2[100] = "test your strchr and make sure it works!!!/n";
	
	printf("src = %s\nc = %c\n\n", src, c);

	printf("STRCHR \t\t= %s\n", strchr(src, c));
	printf("FT_STRCHR \t= %s\n", ft_strchr(src, c));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRRCHR TEST
	 *------------------------------
	 */

static void		test_strrchr(char *src, int c)
{
	//char		dest1[100] = "test your strrchr and make sure it works!!!/n";
	//char		dest2[100] = "test your strrchr and make sure it works!!!/n";
	
	printf("src = %s\nc = %c\n\n", src, c);

	printf("STRRCHR \t= %s\n", strrchr(src, c));
	printf("FT_STRRCHR \t= %s\n", ft_strrchr(src, c));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRSTR TEST
	 *------------------------------
	 */

static void		test_strstr(char *dest, char *src)
{
	
	printf("dest = %s\nsrc = %s\n\n", dest, src);

	printf("STRSTR \t\t= %s\n", strstr(dest, src));
	printf("FT_STRSTR \t= %s\n", ft_strstr(dest, src));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRNSTR TEST
	 *------------------------------
	 */

static void		test_strnstr(char *dest, char *src, size_t n)
{
	
	printf("dest = %s\nsrc = %s\nlen = %lu\n\n", dest, src, n);

	printf("STRNSTR \t= %s\n", strnstr(dest, src, n));
	printf("FT_STRNSTR \t= %s\n", ft_strnstr(dest, src, n));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRCMP TEST
	 *------------------------------
	 */

static void		test_strcmp(char *dest, char *src)
{
	
	printf("dest = %s\nsrc = %s\n\n", dest, src);

	printf("STRCMP \t\t= %d\n", strcmp(dest, src));
	printf("FT_STRCMP \t= %d\n", ft_strcmp(dest, src));
	if (ft_strcmp(dest, src) == 0)
		printf("ITS A MATCH!!!!! :)\n");
	else
		printf("NOT A MATCH :(\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		STRNCMP TEST
	 *------------------------------
	 */

static void		test_strncmp(char *dest, char *src, size_t n)
{
	
	printf("dest = %s\nsrc = %s\nlen = %lu\n\n", dest, src, n);

	printf("STRNCMP \t= %d\n", strncmp(dest, src, n));
	printf("FT_STRNCMP \t= %d\n", ft_strncmp(dest, src, n));
	if (ft_strncmp(dest, src, n) == 0)
		printf("ITS A MATCH!!!!! :)\n");
	else
		printf("NOT A MATCH :(\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ATOI TEST
	 *------------------------------
	 */

static void		test_atoi(char *str)
{
	printf("string = %s\n\n", str);

	printf("ATOI \t\t= %d\n", atoi(str));
	printf("FT_ATOI \t= %d\n", ft_atoi(str));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ISALPHA TEST
	 *------------------------------
	 */

static void		test_isalpha(int c)
{
	
	printf("c = %c\n\n", c);

	printf("ISALPHA \t= %d\n", isalpha(c));
	printf("FT_ISALPHA \t= %d\n", ft_isalpha(c));
	if (ft_isalpha(c))
		printf("YES IT IS!!!\n");
	else
		printf("NO!!!\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ISDIGIT TEST
	 *------------------------------
	 */

static void		test_isdigit(int c)
{
	
	printf("c = %c\n\n", c);

	printf("ISDIGIT \t= %d\n", isdigit(c));
	printf("FT_ISDIGIT \t= %d\n", ft_isdigit(c));
	if (ft_isdigit(c))
		printf("YES IT IS!!!\n");
	else
		printf("NO!!!\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ISASCII TEST
	 *------------------------------
	 */

static void		test_isascii(int c)
{
	
	printf("c = %c\n\n", c);

	printf("ISASCII \t= %d\n", isascii(c));
	printf("FT_ISASCII \t= %d\n", ft_isascii(c));
	if (ft_isascii(c))
		printf("YES IT IS!!!\n");
	else
		printf("NO!!!\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ISPRINT TEST
	 *------------------------------
	 */

static void		test_isprint(int c)
{
	
	printf("c = %c\n\n", c);

	printf("ISPRINT \t= %d\n", isprint(c));
	printf("FT_ISPRINT \t= %d\n", ft_isprint(c));
	if (ft_isprint(c))
		printf("YES IT IS!!!\n");
	else
		printf("NO!!!\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		ISALNUM TEST
	 *------------------------------
	 */

static void		test_isalnum(int c)
{
	
	printf("c = %c\n\n", c);

	printf("ISALNUM \t= %d\n", isalnum(c));
	printf("FT_ISALNUM \t= %d\n", ft_isalnum(c));
	if (ft_isalnum(c))
		printf("YES IT IS!!!\n");
	else
		printf("NO!!!\n");

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		TOLOWER TEST
	 *------------------------------
	 */

static void		test_tolower(int c)
{
	
	printf("c = %c\n\n", c);

	printf("TOLOWER \t= %c\n", tolower(c));
	printf("FT_TOLOWER \t= %c\n", tolower(c));

	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		TOUPPER TEST
	 *------------------------------
	 */

static void		test_toupper(int c)
{
	
	printf("c = %c\n\n", c);

	printf("TOUPPER \t= %c\n", toupper(c));
	printf("FT_TOUPPER \t= %c\n", toupper(c));

	ft_putchar('\n');
	cutting();
}

	/*
	 *---------------------------------------------------------------------------
	 *									SECOND PART
	 *---------------------------------------------------------------------------
	 */

	/*
	 *-------------------------------
	 *		MEMALLOC TEST
	 *------------------------------
	 */

static void		test_memalloc(size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;
	printf("size = %lu\n\n", n);

	if (!(str1 = (char*)malloc(n)))
		printf("failed to allocate memory\n");
	if (!(str2 = (char*)ft_memalloc(n)))
		printf("failed to allocate memory\n");
	while (i < n)
	{
		str1[i] = 'a';
		str2[i] = 'a';
		i++;
	}
	str1[i] = '\0';
	str2[i] = '\0';
	if (!ft_strcmp(str1, str2))
	{
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');

		printf("Good JOB!!!\n");
	}
	else
	{
		ft_putstr(str1);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putchar('\n');

		printf("NO NO NO!!! TRY AGAIN\n");
	}


	ft_putchar('\n');
	cutting();
}

	/*
	 *-------------------------------
	 *		MEMDEL TEST
	 *------------------------------
	 */

static void		test_memdel()
{
	char	*dest;
	void	*p;

	dest = (char*)malloc(sizeof(char) * 2);
	dest[0] = 'E';
	dest[1] = '\0';
	p = dest;
	printf("dest = %s\n\n", dest);

	ft_memdel((void**)(&p));
	while (*dest)
	{
		ft_putchar(*dest++);
	}

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
	test_strchr("return the string starting from k, smile it works!", 'r');
	test_strrchr("retun the sting stating fom , smile it woks!", 'r');
	test_strstr("If I look close enough, Im sure to find my niddle.", "look");
	test_strnstr("search and find the string within the first n characters", "find", 1000);
	test_strcmp("I doubt we are the  same", "I doubt we are the same");
	test_strncmp("abc", "abcde", 3);
	test_atoi("\n\v\t\r\f -123");
	test_isalpha('c');
	test_isdigit('7');
	test_isalnum('7');
	test_isascii('l');
	test_isprint('%');
	test_toupper('a');
	test_tolower('Z');
	/*
	 *part two
	 */
	test_memalloc(1);
	test_memdel();
	return (0);
}
