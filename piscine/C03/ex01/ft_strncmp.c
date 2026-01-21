/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:54 by gatounsi          #+#    #+#             */
/*   Updated: 2025/10/22 17:23:51 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1;
	char *s2;

	// Cas 1 : chaînes identiques
	s1 = "hello";
	s2 = "hello";
	printf("Cas 1 (identiques, n=5) : %d\n", ft_strncmp(s1, s2, 5));

	// Cas 2 : différences dès le début
	s1 = "abc";
	s2 = "xbc";
	printf("Cas 2 (diff. début, n=3) : %d\n", ft_strncmp(s1, s2, 3));

	// Cas 3 : différence au milieu
	s1 = "abc";
	s2 = "abd";
	printf("Cas 3 (diff. milieu, n=3) : %d\n", ft_strncmp(s1, s2, 3));

	// Cas 4 : différence après n caractères
	s1 = "abcdef";
	s2 = "abcxyz";
	printf("Cas 4 (diff. après n, n=3) : %d\n", ft_strncmp(s1, s2, 3));

	// Cas 5 : s1 plus court que s2
	s1 = "abc";
	s2 = "abcdef";
	printf("Cas 5 (s1 plus court, n=6) : %d\n", ft_strncmp(s1, s2, 6));

	// Cas 6 : n = 0 (ne compare rien)
	s1 = "TONZINC";
	s2 = "edezdze";
	printf("Cas 6 (n=0) : %d\n", ft_strncmp(s1, s2, 0));

	// Cas 7 : comparaison jusqu’au '\0'
	s1 = "abc";
	s2 = "abc\0def";
	printf("Cas 7 (n=10, avec '\\0') : %d\n", ft_strncmp(s1, s2, 10));

	// Cas 8 : caractères signés (au-delà de 127)
	s1 = "\200";
	s2 = "\0";
	printf("Cas 8 (caractères signés) : %d\n", ft_strncmp(s1, s2, 1));

	return 0;
}*/
