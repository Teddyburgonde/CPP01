/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:54:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/31 16:16:32 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
    std::string s1 = "HI THIS IS BRAIN";

    std::string *stringPTR = &s1;
    
    std::string &stringREF = s1;
    
    std::cout << &s1 <<std::endl;
    
    std::cout << stringPTR <<std::endl;
    
    std::cout << &stringREF <<std::endl;

    s1 = "Bonjour";

    std::cout << s1 << std::endl;

    std::cout << *stringPTR <<std::endl;

    std::cout << stringREF <<std::endl;
}
