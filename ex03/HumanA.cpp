/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:29:01 by teddybandam       #+#    #+#             */
/*   Updated: 2024/08/24 16:22:19 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)  : name(name), weapon(weapon)
{
    
}

HumanA::~HumanA() 
{

}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType();
}