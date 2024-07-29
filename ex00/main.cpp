/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:00:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/29 15:15:37 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void            randomChump(std::string name);
Zombie          *newZombie( std::string name);

int main()
{
    Zombie *myZombie;

    myZombie = newZombie("Bryant");
    myZombie->announce();
    randomChump("Alice");
    delete myZombie;
}