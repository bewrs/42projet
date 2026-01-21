/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:51:45 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 21:51:46 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tonzinc;

	i = 0;
	tonzinc = (unsigned char *)s;
	while (i < n)
	{
		tonzinc[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
