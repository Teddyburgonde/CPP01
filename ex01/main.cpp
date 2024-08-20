/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:00:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/20 19:19:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void            randomChump(std::string name);
Zombie          *newZombie( std::string name);
Zombie          *zombieHorde(int N, std::string name);


int main()
{
    // Test d'un seul zombie
    Zombie *myZombie;

    myZombie = newZombie("Bryant");
    myZombie->announce();
    randomChump("Alice");
    delete myZombie;


    // Test de la hode de zombie
    int N;
    Zombie *horde;
    
    

    N = 5;
    for(int i = 0; i < N; i++) {
        horde = zombieHorde(N, "HordeZombie");
    }

    for(int i = 0; i < N; i++) {
        horde[i].announce();
    }

    delete[] horde;
}