/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:52:24 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 22:40:26 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	total_len(char const *s1, char const *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	final = malloc(total_len(s1, s2) + 1);
	if (!final)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		final[i++] = s2[j++];
	final[i] = '\0';
	return (final);
}
