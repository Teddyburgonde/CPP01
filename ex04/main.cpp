/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/28 15:36:47 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv) 
{
    using namespace std;
    std::ifstream infile;
    std::ofstream outfile;
    std::string input_file;
    std::string output_file;
    std::string s1;
    std::string s2;
    size_t  pos;
    std::string line;
    
    pos = 0;
    if (argc != 4)
        return print_error("Wrong number of arguments");

    input_file = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    // Créer le nom du fichier de sortie
    output_file = input_file + ".replace";
    if (open_infile(infile, input_file) == 1)
         return print_error("Error opening the input file!");
    if (open_outfile(outfile, output_file) == 1)
        return print_error("Error opening the output file!");
    while (getline(infile, line))
    {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
	    {
            line.erase(pos, s1.length()); // supprine s1 de la ligne
            line.insert(pos, s2); // insert le contenu de s2 a la place
            pos += s2.length(); // Avance la position pour éviter de trouver la même occurrence
        }
        outfile << line << std::endl;  // Écrire la ligne modifiée dans le fichier de sortie
    }
    infile.close();
    outfile.close();

    return (0);
}
