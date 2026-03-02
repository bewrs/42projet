/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:46:12 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/17 17:20:00 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdlib.h>
# include <unistd.h>

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
