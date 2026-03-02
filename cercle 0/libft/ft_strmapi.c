/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:19:31 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/19 22:10:14 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	size_t	i;

	if (!s || !f)
		return (NULL);
	final = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (s[i])
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
