/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:59:57 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/16 20:00:10 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_int(int integer)
{
	int	unit;
	int	decimal;

	if (integer < 10)
	{
		ft_putchar('0');
		ft_putchar(integer + 48);
	}
	else
	{
		decimal = integer / 10;
		unit = integer % 10;
		ft_putchar(decimal + 48);
		ft_putchar(unit + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_int(i);
			ft_putchar(' ');
			print_int(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
// 	 	ft_print_comb2();
// 	 	return (0);
//  }