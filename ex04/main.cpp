/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/29 13:29:08 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv) 
{
    Replace replace;

    using namespace std;
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
    s2 = argv[3];
    // Créer le nom du fichier de sortie
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
