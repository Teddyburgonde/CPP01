/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:27:41 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/22 08:09:32 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

    private:
	std::string type;

	public:
	Weapon();
	~Weapon();
	
	public:
	const std::string& getType(void) const;
	void setType(const std::string& nameType);

};

#endif