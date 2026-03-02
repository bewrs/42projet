/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:34 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/12 17:57:37 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_cpy(char *tmp, char *buff)
{
	char	*keep_tmp;
	int		len;

	len = 0;
	keep_tmp = NULL;
	if (tmp)
	{
		keep_tmp = ft_strdup(tmp);
		free(tmp);
		len = ft_strlen(keep_tmp) + ft_strlen(buff);
		tmp = (char *)malloc(len + 1);
		if (tmp == NULL)
			return (NULL);
		ft_memcpy(tmp, keep_tmp, ft_strlen(keep_tmp) + 1);
		tmp[ft_strlen(keep_tmp)] = '\0';
		ft_memcpy(ft_strchr(tmp, '\0'), buff, ft_strlen(buff));
		tmp[len] = '\0';
		free(keep_tmp);
	}
	else if (!tmp)
		tmp = ft_strdup(buff);
	return (tmp);
}

void	ft_extract(char **ptr)
{
	char	*keep_tmp;

	keep_tmp = ft_strdup(ft_strchr(*ptr, '\n') + 1);
	free(*ptr);
	*ptr = keep_tmp;
}

char	*ft_line_free(char **ptr_tmp, char **ptr_buff, ssize_t b)
{
	char	*line;

	line = NULL;
	if (*ptr_tmp && **ptr_tmp && b == 0)
	{
		line = ft_strdup(*ptr_tmp);
		free(*ptr_tmp);
		*ptr_tmp = NULL;
		free(*ptr_buff);
		*ptr_buff = NULL;
		return (line);
	}
	if (ft_strchr(*ptr_tmp, '\n') != NULL)
	{
		line = ft_substr(*ptr_tmp, 0, (ft_strlen(*ptr_tmp)
					- (ft_strlen(ft_strchr(*ptr_tmp, '\n')))) + 1);
		ft_extract(ptr_tmp);
		return (line);
	}
	free(*ptr_tmp);
	*ptr_tmp = NULL;
	free(*ptr_buff);
	*ptr_buff = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*tmp;
	char		*buff;
	ssize_t		read_bytes;

	buff = NULL;
	read_bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (read_bytes != 0)
	{
		if (tmp && (ft_strchr(tmp, '\n') != NULL))
			return (ft_line_free(&tmp, &buff, read_bytes));
		buff = (char *)malloc(BUFFER_SIZE + 1);
		if (buff == NULL)
			return (NULL);
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		buff[read_bytes] = '\0';
		tmp = ft_cpy(tmp, buff);
		free(buff);
		buff = NULL;
	}
	return (ft_line_free(&tmp, &buff, read_bytes));
}
