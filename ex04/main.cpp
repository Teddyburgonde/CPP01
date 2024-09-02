/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/01 11:57:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv) 
{
    Replace replace;

    std::ifstream infile;
    std::ofstream outfile;
    std::string input_file;
    std::string output_file;
    std::string s1;
    std::string s2;
    std::string line;
    size_t  pos;
    
    pos = 0;
    if (argc != 4)
        return replace.print_error("Wrong number of arguments");

    input_file = argv[1];
    s1 = argv[2];
    if (!s1[0])
        return (replace.print_error("Error invalid argument"));
    s2 = argv[3];
    output_file = input_file + ".replace";
    if (replace.open_infile(infile, input_file) == 1)
         return (replace.print_error("Error opening the input file!"));
    if (replace.open_outfile(outfile, output_file) == 1)
        return (replace.print_error("Error opening the output file!"));
    while (getline(infile, line))
    {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
	    {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();

    return (0);
}
