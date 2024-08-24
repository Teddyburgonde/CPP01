/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:48:25 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/24 16:23:35 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{
    
}
HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getType();
}
