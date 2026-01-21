/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:49:00 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/22 17:26:18 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (str[i] != '\0' && to_find[z] != '\0')
	{
		if (str[i] == to_find[z])
		{
			i++;
			z++;
		}
		else
		{
			i++;
			z = 0;
		}
	}
	if (to_find[z] == '\0')
		return (&str[i - z]);
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
	char *str;
	char *to_find;

	str = "rs3, c";
	to_find = "s3";
	printf("%s\n",ft_strstr(str, to_find));
	return(0);
}*/
