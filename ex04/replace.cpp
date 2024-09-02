/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:31:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/01 11:57:44 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(){}
Replace::~Replace(){}


int Replace::print_error(const std::string &message) 
{
    std::cerr << message << std::endl;
    return (1);
}

int Replace::open_infile(std::ifstream& infile, std::string input_file)
{
    infile.open(input_file.c_str());
    if (!infile.is_open())
        return (1);
    return (0);
}

int Replace::open_outfile(std::ofstream& outfile, std::string output_file)
{
    outfile.open(output_file.c_str());
    if (!outfile.is_open())
        return (1);
    return (0);
}
