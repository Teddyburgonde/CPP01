/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:10:05 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/20 18:43:41 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. Ajouter le prototype de la function  ✅
2. Coder la fonction :  

    - À l'intérieur de cette fonction, allouez dynamiquement un tableau de N objets Zombie à l'aide de l'opérateur new[]. ❌
    - parcourez le tableau de N zombies et initialisez chacun avec le nom passé en paramètre.❌
    - return Zombie. ❌
    - Utiliser announce() pour chacun des zombies. ❌
    - Supprimer les zombies delete[] ???  ❌
*/

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *arrayZombie; // Déclaration d'un pointer 

	arrayZombie = new Zombie[N]; // allocation dynamique 
	for (int i = 0; i < N; i++) {
		arrayZombie[i].setName(name); // On donne un nom a chaque zombie
	}
	return (arrayZombie);
}
