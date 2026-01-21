/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:04:41 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/21 12:06:00 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
    char *tests[] = {
        "abc",
        "ABC",
            "",
            "aBc",
            "oui",
            "non",
            "123",
            "azerty",
            "a z",
            "lowercase"
        };
        int nb_tests = sizeof(tests) / sizeof(tests[0]);
        for (int i = 0; i < nb_tests; i++)
        {
            printf("Test \"%s\" : %d\n", tests[i], 
			ft_str_is_lowercase(tests[i]));
        }
        return 0;
    }*/