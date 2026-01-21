/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:14:41 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/05 04:15:39 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	if (min >= max)
		return (NULL);
	range = max - min;
	tab = (int *)malloc(sizeof(int) * range);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int	main()
{
	int	c = 0;
	int	min = -10;
	int	max = -5;
	int *test = ft_range(min, max);
	if (test == NULL)
		return (1);
	while (c < (max - min))
	{
		printf("%d ", test[c]);
		c++;
	}
	free(test);
	return (0);
}*/
