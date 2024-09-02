/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:51:47 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/31 09:16:12 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    Zombie::_name = "";
}

Zombie::~Zombie()
{
    if (_name.empty() == 0)
        std::cout << "Zombie named " << _name << " died" << std::endl;
} 

void    Zombie::announce(void)
{
    if (Zombie::_name.empty() == 1)
        std::cout << "Zombie undefined" << std::endl;
    std::cout << Zombie::_name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    _name = name;
}

