#include "libft.h"

void	ft_putnum(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnum(n / 10);
		ft_putnum(n % 10);
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
}
