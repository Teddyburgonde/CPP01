/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:36:20 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/28 13:12:31 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP


#include <iostream>
#include <fstream>
#include <string>

class findAndReplace {

	public:
    int	open_outfile(std::ofstream& outfile, std::string output_file);
    int	open_infile(std::ifstream& infile, std::string input_file);
    int	print_error(const std::string &message);

}



#endif