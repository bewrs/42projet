/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:22:48 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/21 12:08:42 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
    char str5[] = {65, 31, 66, 0}; 
    printf("%d", ft_str_is_printable(str5));
    return(0);
}*/
