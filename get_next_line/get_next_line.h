/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:36 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/09 19:19:45 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h> // open
# include <stdlib.h> // free, malloc
# include <unistd.h> // read, ssize_t
# include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, size_t start, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_cpy(char *tmp, char *buff);
void	ft_extract(char **ptr);
char	*ft_line_free(char **ptr_tmp, char **ptr_buff, ssize_t b);
char	*get_next_line(int fd);

#endif
