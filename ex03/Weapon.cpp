/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:27:38 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/22 08:08:27 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(){}

Weapon::~Weapon(){}

const std::string& Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(const std::string& nameType)
{
    type = nameType;
}