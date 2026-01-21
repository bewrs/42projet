/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:46:01 by gatounsi          #+#    #+#             */
/*   Updated: 2026/01/20 21:49:00 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*k;

	if (lst == NULL)
		return (NULL);
	k = lst;
	while (k->next != NULL)
	{
		k = k->next;
	}
	return (k);
}

/* de k on va vers le prohchain k
tant que le prochaine k est différent de NULL */