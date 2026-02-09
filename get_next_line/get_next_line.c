/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:34 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/09 20:14:13 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *tmp;
	char *buff;
	char *line;
	ssize_t read_bytes;
	line = NULL;
	buff = NULL;
	read_bytes = 1;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
}

/*int main()
{
	int fd = 0;
	char *string = NULL;
	fd = open("tonzinc.txt", O_RDONLY);
	if(fd < 0)
	{
		printf("Erreur")
		return(1);
	}
 	string = get_next_line(fd);
	while(string != NULL)
	{
		printf("%s", string);
		string = get_next_line(fd);
	}
	return (0);
}*/
