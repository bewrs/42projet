/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:10:53 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 22:06:25 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	while (d < size && dst[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	if (size <= d)
		return (size + s);
	i = 0;
	while (src[i] && (d + i) < (size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	if ((d + i) < size)
		dst[d + i] = '\0';
	return (d + s);
}
