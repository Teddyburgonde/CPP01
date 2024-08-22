/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:27:38 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/22 22:34:45 by teddybandam      ###   ########.fr       */
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