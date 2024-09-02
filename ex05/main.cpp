/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:41:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/31 17:04:30 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DEBUG level:" <<std::endl;
    harl.complain("DEBUG");

    std::cout << "\nINFO level:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\nWARNING level:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\nERROR level:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nUNKNOWN level:" << std::endl;
    harl.complain("UNKNOWN");

    return (0);
}