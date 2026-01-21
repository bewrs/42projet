/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:52:58 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/02 16:24:28 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 1)
		nb = nb * ft_recursive_power (nb, power - 1);
	if (power == 0)
		return (1);
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(2, 0));
	return(0);
}
*/