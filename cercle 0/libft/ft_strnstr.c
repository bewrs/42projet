/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:19:50 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/19 22:21:22 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	debut;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		debut = i;
		while (big[i] == little[j] && i < len && big[i])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[debut]);
		}
		i = debut + 1;
		j = 0;
	}
	return (NULL);
}
