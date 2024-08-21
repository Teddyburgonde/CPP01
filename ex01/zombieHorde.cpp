/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:10:05 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/21 09:43:18 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *arrayZombie;

	arrayZombie = new Zombie [N]; // Allocation du tableau
	for (int i = 0; i < N; i++) {
		arrayZombie[i].setName(name); // donnne un nom a chaque membre du tableau
	}
	return (arrayZombie);
}





































// Zombie *zombieHorde(int N, std::string name)
// {
// 	Zombie *arrayZombie; // Déclaration d'un pointer 

// 	arrayZombie = new Zombie[N]; // allocation dynamique 
// 	for (int i = 0; i < N; i++) {
// 		arrayZombie[i].setName(name); // On donne un nom a chaque zombie
// 	}
// 	return (arrayZombie);
// }
