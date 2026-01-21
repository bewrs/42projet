/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:31:41 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/14 22:31:47 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("résultat = %d, reste = %d", div, mod);
	return(0);
}*/
