/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:54:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/21 15:58:40 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string s1 = "HI THIS IS BRAIN";

    std::string *stringPTR = &s1;
    
    std::string &stringREF = s1;
    
    
    // Adresse memoire de la variable string
    std::cout << &s1 <<std::endl;
    
    // Adresse memoire détenue par stringPTR 
    std::cout << stringPTR <<std::endl;
    
    // Adresse memoire détenue par stringREF
    std::cout << &stringREF <<std::endl;

    // La valeur de la variable string 
    std::cout << s1 << std::endl;

    // La valeur pointer par stringPTR
    std::cout << *stringPTR <<std::endl;

    // La valeur indiqué par stringREF
    std::cout << stringREF <<std::endl;
}