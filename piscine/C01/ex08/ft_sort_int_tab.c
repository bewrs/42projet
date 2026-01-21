/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:34:14 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/20 19:15:27 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

#include <stdio.h>
int main(void)
{
	int a [] = { 1, 5, 8, 0};
	int size =  4;
	int i = 0;
	
	printf("Tableau avant : ");
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	ft_sort_int_tab(a, size);
	i = 0;
	while ( i < size)
	{
		printf("%d", a[i]);
		i++;
	}
	return(0);	
}


    