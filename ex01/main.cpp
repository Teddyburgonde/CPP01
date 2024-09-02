/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:00:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/31 15:54:09 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie          *zombieHorde(int N, std::string name);

int main()
{
    int N;
    Zombie *horde;

    N = 10;

    horde = zombieHorde(N, "HordeZombie");

    delete[] horde;
}
