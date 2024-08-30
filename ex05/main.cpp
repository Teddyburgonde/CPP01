/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:41:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/30 12:23:56 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Connaissez-vous Harl ? Nous le connaissons tous, n'est-ce pas ? Au cas où vous ne le connaîtriez pas,
 voici le genre de commentaires que Harl fait. Ils sont classés par niveaux :

    Niveau "DEBUG" : Les messages de débogage contiennent des informations contextuelles.
    Ils sont principalement utilisés pour diagnostiquer des problèmes.
    Exemple : "J'adore avoir du bacon en plus pour mon burger 
    7XL-double-fromage-triple-cornichon-spécial-ketchup. Vraiment !"
    
    
    Niveau "INFO" : Ces messages contiennent des informations détaillées. 
    Ils sont utiles pour tracer l'exécution du programme en environnement 
    de production. Exemple : "Je n'arrive pas à croire que 
    rajouter du bacon coûte plus cher. 
    Vous n'avez pas mis assez de bacon dans mon burger !
    Si vous l'aviez fait, je ne demanderais pas plus !"
    
    Niveau "WARNING" : Les messages d'avertissement 
    indiquent un problème potentiel dans le système. 
    Cependant, il peut être géré ou ignoré. Exemple : "Je pense que je 
    mérite d'avoir du bacon en plus gratuitement. 
    Je viens ici depuis des années alors que vous avez 
    commencé à travailler ici le mois dernier."
    
    Niveau "ERROR" : Ces messages indiquent 
    qu'une erreur irrécupérable s'est produite. 
    Il s'agit généralement d'un problème critique nécessitant 
    une intervention manuelle. Exemple : "C'est inacceptable ! 
    Je veux parler au manager tout de suite."

Vous allez automatiser Harl. 
Ce ne sera pas difficile puisque Harl dit toujours les mêmes choses. 
Vous devez créer une classe Harl avec les fonctions membres privées suivantes :

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );









Harl a également une fonction membre publique qui appelle les quatre fonctions membres ci-dessus en fonction du niveau passé en paramètre :

    void complain( std::string level );

L'objectif de cet exercice est d'utiliser des pointeurs sur fonctions membres. Ce n'est pas
 une suggestion. 
 Harl doit se plaindre sans utiliser une forêt de if/else if/else.
  Il ne réfléchit pas deux fois !

Créez et rendez des tests pour montrer que Harl se plaint beaucoup. 
Vous pouvez utiliser les exemples de commentaires listés ci-dessus 
ou choisir d'utiliser vos propres commentaires.
*/

#include "harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DeBUG level:" <<std::endl;
    harl.complain("DEBUG");

    std::cout << "\nINFO level:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\nWARNING level:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\nERROR level:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nUNKNOWN level:" << std::endl;
    harl.complain("UNKNOWN");

    return 0;
}