/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:06:32 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/09 19:18:33 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *s) //pour connaitre la taille a malloc
{
	int i = 0;
	while(str[i])
		i++;
	return(str);
}

char	*ft_strdup(const char *src) // pour copier une string dans une autre
{									//retourne la string copié deja alloué
	char	*dest;
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, size_t start, size_t len) //sert à ubdate la variable static tmp, enlever la phrase pour proch appl de gnl
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

void *ft_memcpy(void *dst, void *src, size_t n) 
{
	size_t i = 0;
	if(dst == NULL && src == NULL)
		return(NULL);
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return(dst);
}
