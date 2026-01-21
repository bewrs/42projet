/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:55:36 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/24 19:48:14 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar ('-');
		num = (unsigned int)(-nb);
	}
	else
		num = (unsigned int) nb;
	if (num >= 10)
		ft_putnbr (num / 10);
	ft_putchar ("0123456789" [num % 10]);
}

/*int main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	return(0);
}*/
