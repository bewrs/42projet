/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:37:38 by gatounsi          #+#    #+#             */
/*   Updated: 2025/11/02 15:35:51 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	low;
	int	max;
	int	i;

	low = 1;
	max = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 46340 * 46340)
		max = 46340;
	while (low <= max)
	{
		i = (low + max) / 2;
		if (i * i == nb)
			return (i);
		else if (i * i < nb)
			low = i + 1;
		else
			max = i - 1;
	}
	return (0);
}
