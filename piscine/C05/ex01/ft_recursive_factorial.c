/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:25:54 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/02 16:23:10 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	nb = nb * ft_recursive_factorial (nb - 1);
	return (nb);
}

/*#include <stdio.h>
int main(void)
{

	printf("%d\n", ft_recursive_factorial(5));
	return(0);
}*/
