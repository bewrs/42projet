/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:00:21 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/16 20:00:23 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

// int main(void)
// {
//     ft_putnbr(-2147483648); // Test with the minimum integer value
//     write(1, "\n", 1);
//     ft_putnbr(2147483647);  // Test with the maximum integer value
//     write(1, "\n", 1);
//     ft_putnbr(0);           // Test with zero
//     write(1, "\n", 1);
//     ft_putnbr(-12345);     // Test with a negative number
//     write(1, "\n", 1);
//     ft_putnbr(67890);      // Test with a positive number
//     write(1, "\n", 1);
//     return (0);
// }
	/* Expected output:
-2147483648
2147483647
0
-12345
67890
*/