/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:36:20 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/02 14:09:35 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP


#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

class Replace {
    
    public:
    Replace();
    ~Replace();

	public:
    int	open_outfile(std::ofstream& outfile, std::string output_file);
    int	open_infile(std::ifstream& infile, std::string input_file);
    int	print_error(const std::string &message);

};


#endif