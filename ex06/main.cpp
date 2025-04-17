/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:41:04 by tebandam          #+#    #+#             */
/*   Updated: 2025/04/17 16:44:44 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;    
	if (argc == 2)
	{
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int index = -1;
		for (int i = 0; i < 4; ++i)
		{
			if (argv[1] == levels[i])
				index = i;
		}
		switch(index)
		{
			case 0:
				harl.complain("DEBUG");
			case 1:
				harl.complain("INFO");
			case 2:
				harl.complain("WARNING");
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
