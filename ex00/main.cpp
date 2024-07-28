/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:00:56 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/28 09:46:12 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"


int main()
{
    Zombie zombie;

    zombie.announce();
    std::cout << "Succes test for main.cpp" << std::endl;
}