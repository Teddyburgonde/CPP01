/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/25 23:06:57 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 

using namespace std;

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
std::string::find : 
Pour localiser la position de la première 
occurrence de s1 dans la ligne.

std::string::substr : 
Pour extraire des parties de la ligne, 
comme la portion avant s1 et la portion après s1.

std::string::append ou l'opérateur += : 
Pour construire la nouvelle ligne en concaténant 
les parties extraites avec s2.

std::string::length : Pour obtenir la 
longueur de s1, ce qui te permet de 
sauter la partie remplacée et continuer à 
chercher d'autres occurrences.

*/


/*

Pour remplacer toutes les occurrences de s1 par s2 dans chaque ligne sans utiliser std::string::replace, tu peux utiliser les fonctions suivantes :

    std::string::find : Pour localiser la position de la première occurrence de s1 dans la ligne.

    std::string::substr : Pour extraire des parties de la ligne, comme la portion avant s1 et la portion après s1.

    std::string::append ou l'opérateur += : Pour construire la nouvelle ligne en concaténant les parties extraites avec s2.

    std::string::length : Pour obtenir la longueur de s1, ce qui te permet de sauter la partie remplacée et continuer à chercher d'autres occurrences.

Ces fonctions combinées te permettront de parcourir la ligne, trouver chaque occurrence de s1, la remplacer par s2, et reconstruire la ligne avec les modifications nécessaires.



*/



//int ft_open(std::string name_of_file, char *s1, char *s2)
// & permet de ne pas creer de nouvelle copie dans la memoire
void ft_open(const std::string& name_of_file, char *s1, char *s2)
{
	
	string	line;
	
	// Open file
	ifstream inputFile(name_of_file);
	// Verif open
	if (!inputFile.is_open())
	{
		cerr << "Error opening the file!" << endl;
		return ;
	}
	// lire le fichier et on lenvoie sur la sortie standard
	while (getline(inputFile, line))
	{
		if (s1 == line || s2 == line)
		{
			cout << "Merci" << endl;
		}
		cout << "valeur de s1:" << s1 << endl;
		cout << "valeur de line:" << line << endl;
		cout << line << endl;
	}
	// close
	// cout << "valeur de line[0]" << line << endl;
	// if (s1[0] == line[0] || s2 == line)
	// {
	// 	cout << "Bingo" << endl;
	// }
	inputFile.close();
}

int	main(void)
{
	char s1[] = "bonjour";
	char s2[] = "aurevoir";
	ft_open(std::string("abc.txt"), s1, s2);
}
