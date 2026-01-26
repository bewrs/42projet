/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:17:15 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/19 22:27:34 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	size_t				i;

	d = dst;
	if (!n || dst == src)
		return (dst);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	return (dst);
}
