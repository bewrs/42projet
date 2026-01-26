#include "printf.h"

void	ft_putstr_fd(char *s)
{
	int	i;
    int count = 1;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
        count++;
	}
    return(count);
}
