/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:00:36 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/16 20:00:37 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
}

void	print_combination(int *arr, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = arr[i++] + '0';
		write(1, &c, 1);
	}
}

void	increment_array(int *arr, int n, int i)
{
	int	j;

	arr[i]++;
	j = i + 1;
	while (j < n)
	{
		arr[j] = arr[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	init_array(arr, n);
	while (1)
	{
		print_combination(arr, n);
		if (arr[0] == 10 - n && arr[n - 1] == 9)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && arr[i] == 9 - (n - 1 - i))
			i--;
		increment_array(arr, n, i);
	}
}

// int main(void)
// {
// 	int n;

// 	n = 2;
// 	while (n <= 9)
// 	{
// 		ft_print_combn(n);
// 		write(1, "\n", 1);
// 		n++;
// 	}
// 	return (0);
// }
