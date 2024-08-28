/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/28 12:12:25 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <fstream>

using namespace std;


// 1 ere 
// https://github.com/LucieLeBriquer/cpp01/blob/main/ex04/main.cpp

// 2eme
// https://github.com/madebypixel02/CPP-Module-01/blob/main/ex04/main.cpp



/*

Pour remplacer toutes les occurrences de s1 par s2 dans chaque ligne sans utiliser std::string::replace, tu peux utiliser les fonctions suivantes :

    std::string::find : Pour localiser la position
	de la première occurrence de s1 dans la ligne.

    std::string::substr : Pour extraire des parties de la ligne,
	 comme la portion avant s1 et la portion après s1.

    std::string::append ou l'opérateur += :
	 Pour construire la nouvelle ligne en concaténant les parties extraites avec s2.

    std::string::length : Pour obtenir la longueur de s1,
	 ce qui te permet de sauter la partie remplacée et continuer à chercher d'autres occurrences.

Ces fonctions combinées te 
permettront de parcourir la ligne, trouver 
chaque occurrence de s1, la remplacer par s2, et 
reconstruire la ligne avec les modifications nécessaires.

*/


// std::string::npos si la chaine n'as pas etait trouvée








// 1. input_file = argv[1] s1 = argv[2] s2 = argv[3]
// 2. Ouvrir l'infile 
// 3. Verif de l'open infile
// 4. Lire le contenu du fichier 
// 5. Recherche le contenu de s1 dans le fichier avec find
// 6. Remplacer s1 par le contenu de s2 
// 7. Ecrire le contenu de line dans le fichier outfile.
// 8. donner a outfile un no





#include <iostream>
#include <fstream>
#include <string>

int print_error(const std::string &message) 
{
    std::cerr << message << std::endl;
    return 1;
}

int main(int argc, char **argv) 
{
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

    infile.open(input_file.c_str());
    if (!infile.is_open())
        return print_error("Error opening the input file!");
    outfile.open(output_file.c_str());
    if (!outfile.is_open())
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
