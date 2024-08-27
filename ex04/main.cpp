/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/27 16:28:18 by tebandam         ###   ########.fr       */
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



/*!
(Déjà fait) : Ouvrir le fichier d'entrée et vérifier qu'il s'ouvre correctement.
(Déjà fait) : Lire le fichier ligne par ligne.

(À faire) : Remplacer toutes les occurrences de 
s1 par s2 dans chaque ligne.

(À faire) : Ouvrir un nouveau 
fichier pour écrire le résultat modifié.

(Déjà fait en partie) : Fermer le fichier 
d'entrée. 

(À faire) Fermer également le fichier de sortie.

(À faire) : Ajouter une gestion 
des erreurs pour les chaînes s1 et s2, et créer
des tests pour vérifier 
le bon fonctionnement du programme.
*/

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


//int ft_open(std::string name_of_file, char *s1, char *s2)
// & permet de ne pas creer de nouvelle copie dans la memoire
// void ft_open(const std::string& name_of_file, char *s1)
// {
// 	std::string line;
// 	int pos_s1;
// 	ifstream inputFile(name_of_file.c_str());

// 	if (!inputFile.is_open())
// 	{
// 		cerr << "Error opening the file!" << endl;
// 		return ;
// 	}
// 	while (getline(inputFile, line))
// 	{
// 		//cout << line << endl;

// 		pos_s1 = line.find(s1);
// 		if (pos_s1 != 0)
// 		{
// 			cout << "find: " << line << endl;
// 		}
// 	}
// 	inputFile.close();
// }

// int	main(void)
// {
// 	char s1[] = "bonjour";
// 	ft_open(std::string("abc.txt"), s1);
// }



// int	print_error(std::string message)
// {
// 	cerr << message << endl;	
// 	return (1);
// }


// int	main(int argc, char **argv)
// {
// 	std::ifstream infile;
// 	std::ofstream outfile;
// 	std::string file;
// 	std::string line;
// 	std::string s1;
// 	std::string s2;
// 	size_t pos;
// 	if (argc != 4)
// 		return (print_error("Wrong number of arguments"));
// 	file = argv[1];
// 	s1 = argv[2];
// 	s2 = argv[3];
// 	// ouverture du fichier et c_str converti en char* car open veut un char *
// 	infile.open(file.c_str());
// 	if (!infile.is_open())
// 		return (print_error("Error opening the file!"));
// 	while (getline(infile, line))
// 	{
// 		if (pos)
// 		//cout << line << endl;
// 	}
// 	infile.close();
// }

#include <iostream>
#include <fstream>
#include <string>

int print_error(const std::string &message) {
    std::cerr << message << std::endl;
    return 1;
}

int main(int argc, char **argv) {
    std::ifstream infile;
    std::ofstream outfile;
    std::string input_file;
    std::string s1;
    std::string s2;

    if (argc != 4)
        return print_error("Wrong number of arguments");

    input_file = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    infile.open(input_file.c_str());
    if (!infile.is_open())
        return print_error("Error opening the input file!");

    outfile.open("output.txt");
    if (!outfile.is_open())
        return print_error("Error opening the output file!");

    std::string line;
    while (getline(infile, line)) 
	{
        std::string new_line;
        size_t pos = 0;
        size_t start_pos = 0;

        // line c'est la line actuel dans laquel je cherche
		// s1 c'est le mot que je cherche dans line
        while ((pos = line.find(s1, start_pos)) != std::string::npos) 
		{
            // Ajouter la partie avant s1
            new_line += line.substr(start_pos, pos - start_pos);
            // Ajouter s2 à la place de s1
            new_line += s2;
            // Mettre à jour start_pos pour continuer après la fin de s1
            start_pos = pos + s1.length();
        }

        // Ajouter le reste de la ligne après la dernière occurrence de s1
        new_line += line.substr(start_pos);

        // Écrire la nouvelle ligne dans le fichier de sortie
        outfile << new_line << std::endl;
    }
    infile.close();
    outfile.close();

    return 0;
}
