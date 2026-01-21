/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:28:28 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 22:07:35 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	i;
	size_t	actual_len;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		actual_len = 0;
	else if (ft_strlen(s + start) < len)
		actual_len = ft_strlen(s + start);
	else
		actual_len = len;
	sub = malloc(actual_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
