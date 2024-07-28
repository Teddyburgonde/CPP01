/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:51:47 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/28 16:08:23 by tebandam         ###   ########.fr       */
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
        std::cout << "Zombie named" << Zombie::name << "died" << std::endl;
} 

void    announce(void)
{
    std::cout << name << "BraiiiiiinnnzzzZ..." << std::endl;
}


// Zombie*	Zombie::newZombie(std::string name)

// void	Zombie::randomChump(std::string name)