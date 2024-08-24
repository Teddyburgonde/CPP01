/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:28:42 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/24 15:54:23 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include "Weapon.hpp" 
#include <iostream>

class HumanA {
	
	private:
	std::string	name;
	Weapon& weapon;
	
	public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

	void	attack();
};


#endif