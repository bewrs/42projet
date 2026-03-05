/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatounsi <gatounsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:09:11 by gatounsi          #+#    #+#             */
/*   Updated: 2026/03/05 18:16:46 by gatounsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNLBOOSTE
#define GNLBOOSTE


#include <stdio.h>


typedef struct s_map
{
    char **memmap;
    int largeur;
    int hauteur;
    
    int positionJ[2];
    int positionS[2];
    int positionE[2];

    int compt_J;
    int compt_S;
    int compt_E;
} t_map;

enum map{
    CASE,
    MUR,
    ENTRE,
    SORTIE,
    JOUEUR
};

#endif
