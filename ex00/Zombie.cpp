/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:51:47 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/28 16:28:18 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    Zombie::name = ""; 
}

Zombie::~Zombie()
{
    // If the name is not empty
    if (name.empty() == 0)
        std::cout << "Zombie named" << name << "died" << std::endl;
} 

void    Zombie::announce(void)
{
    // if no name
    if (Zombie::name[0].empty() == 1)
        std::cout << "Zombie undefined" << std::endl;
    std::cout << Zombie::name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::randomChump(std::string name)
{
    Zombie newZombie;
    newZombie.name = name;
    newZombie.announce();
}


// Zombie*	Zombie::newZombie(std::string name)
