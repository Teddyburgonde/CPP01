/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:52:32 by teddybandam       #+#    #+#             */
/*   Updated: 2024/08/31 16:50:57 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB 
{

    private:
    std::string name;
    Weapon* weapon;

    public :
    HumanB(const std::string& _name);
    ~HumanB();

    public:
    void    attack();
    void    setWeapon(Weapon& weapon);
};

#endif