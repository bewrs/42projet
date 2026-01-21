/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:44:07 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/02 16:22:14 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>
int main(void)
{
	int i = 1;
	printf("%d\n", ft_iterative_factorial(i));
	return(0);
}*/
