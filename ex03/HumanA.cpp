/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:29:01 by teddybandam       #+#    #+#             */
/*   Updated: 2024/08/23 00:25:07 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
{
    // : name(name), weapon(weapon) {}  // Utilisation de la liste
}

HumanA::~HumanA() 
{

}

void HumanA::attack()
{
                                                // getType ????
    std::cout << name << " attacks with their " << weapon.getType();
}