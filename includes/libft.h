#ifndef LIBFT_H
#define LIBFT_H
	#include <string.h>
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putnbr(int n);
	int	ft_isspace(char c);
	size_t	ft_strlen(const char *str);
	int	ft_atoi(const char *str);
	char	*ft_strdup(const char *str);
	char	*ft_strcpy(char *dest, const char *src);
	char	*ft_strncpy(char *dest, const char *src, size_t n);
	char	*ft_strcat(char *dest, const char *src);
	char	*ft_strncat(char *dest, const char *src, size_t n);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memset(void *s, int c, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);
#endif
