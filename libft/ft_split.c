/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:52:06 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 22:25:27 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_free(char **arr, size_t n)
{
	while (n--)
		free(arr[n]);
	free(arr);
}

static char	*ft_get_next_word(char const *s, char c, size_t *i)
{
	size_t	len;
	size_t	start;

	len = 0;
	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	if (len == 0)
		return (NULL);
	*i += len;
	return (ft_substr(s, start, len));
}

static char	**ft_build_result(char const *s, char c, size_t wc)
{
	char	**res;
	size_t	i;
	size_t	j;
	char	*word;

	res = malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wc)
	{
		word = ft_get_next_word(s, c, &i);
		if (!word)
		{
			ft_free(res, j);
			return (NULL);
		}
		res[j] = word;
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_build_result(s, c, ft_count_words(s, c)));
}
