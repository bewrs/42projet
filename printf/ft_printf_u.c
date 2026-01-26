#include "printf.h"

int ft_putnbr(int n)
{
	int count = 1;
    unsigned int	num;
	long			nb;

	nb = n;
	if (nb < 0)
        return(-1);
	else
		num = (unsigned int)nb;
	if (num >= 10)
	{
        ft_putnbr(num / 10);
        count++;
    }	
	ft_printf_c("0123456789"[num % 10]);
}
