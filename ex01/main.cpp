/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:00:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/21 09:42:27 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie          *zombieHorde(int N, std::string name);

int main()
{
    // Test de la horde de zombie
    int N;
    Zombie *horde;

    N = 10;

    for(int i = 0; i < N; i++) {
        horde = zombieHorde(N, "HordeZombie");
        // Permet l'allocation du tableau et donne un noms aux Zombies
    }

    for(int i = 0; i < N; i++) {
        horde[i].announce(); // announce permet d'ecrire HordeZombie: BraiiiiiinnnzzzZ...
    }

    delete[] horde;
    // detruire le tableau
}