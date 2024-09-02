/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:10:05 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/31 15:53:45 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *arrayZombie = NULL;
	
	if (N > 0)
		arrayZombie = new Zombie [N];
	if (!arrayZombie)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		arrayZombie[i].setName(name);
        arrayZombie[i].announce(); 
	}
	return (arrayZombie);
}
