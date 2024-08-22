/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:28:42 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/23 00:22:33 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp" 

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