/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 05:01:54 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/05 05:10:52 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_xdigit(unsigned long long nb, int check)
{
	char	*xdigit;

	xdigit = "0123456789abcdef";
	if (nb < 16 && check == 1)
		ft_putchar('0');
	if (nb >= 16)
	{
		ft_xdigit(nb / 16, 0);
		ft_xdigit(nb % 16, 0);
	}
	else
		ft_putchar(xdigit[nb]);
}

static void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0');
		tmp /= 16;
	}
	ft_xdigit(addr, 0);
}

static void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
			ft_xdigit((unsigned long long)c[i], 1);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (c[i] <= 31 || c[i] >= 127)
			ft_putchar('.');
		else
			ft_putchar(c[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	columns;

	i = 0;
	while (i * 16 < size)
	{
		if (i < size / 16)
			columns = 16;
		else
			columns = size % 16;
		ft_print_addr((unsigned long long)addr + (i * 16));
		ft_putchar(':');
		ft_print_data((unsigned char *)(addr + (i * 16)), columns);
		ft_putchar('\n');
		i++;
	}
	return (addr);
}
