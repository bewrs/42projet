/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:42:21 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/19 22:07:00 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	long			nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned int)(-nb);
	}
	else
		num = (unsigned int)nb;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd("0123456789"[num % 10], fd);
}
