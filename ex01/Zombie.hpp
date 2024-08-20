/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:50:52 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/20 16:44:28 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

/*Created Zombie class*/
class Zombie 
{
    public:
    Zombie(); // Constructor
    ~Zombie(); // Destructor
    void            announce(void);
    //SETTERS
    void    setName(std::string name);
    Zombie* zombieHorde( int N, std::string name );
    private:
    /*Attribut name*/
    std::string     _name;
    


};

#endif