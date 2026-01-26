#include "printf.h"

static int	ft_printf_XX(unsigned long n)
{
	char	*base;
	int		count;
	char	c;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_printf_XX(n / 16);
	c = base[n % 16];
	write(1, &c, 1);
	return (count + 1);
}