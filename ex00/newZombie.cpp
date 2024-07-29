/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:10:35 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/29 14:50:37 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombiePointer;

    zombiePointer = new Zombie;
    zombiePointer->setName(name);
    return (zombiePointer);
}