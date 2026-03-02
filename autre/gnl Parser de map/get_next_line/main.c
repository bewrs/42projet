/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:05:00 by gatounsi          #+#    #+#             */
/*   Updated: 2026/02/11 10:05:00 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	char	*path;

	path = "tonzinc.txt";
	if (argc > 1)
		path = argv[1];
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		printf("Erreur d'ouverture: %s\n", path);
		return (1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
