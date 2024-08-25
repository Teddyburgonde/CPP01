/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:50:31 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/25 17:06:40 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <fstream> 

using namespace std;

//int ft_open(std::string name_of_file, char *s1, char *s2)
// & permet de ne pas creer de nouvelle copie dans la memoire
int ft_open(std::string& name_of_file)
{
	// ofstream permet de cree un objet (fio) qu'on
	// peut ecrire dedans
	ofstream fio("abc.txt", ios::app);
	if (fio.is_open())
	{
		cout << "File opened successfully." << endl;

		stdout << "This text is appended to the file." << endl; 
    	fio.close();
        cout << "File closed." << endl; 
    }
	else
    {
        cout << "error opening file!" << endl;
        return (1);
    }
    return (0);
}

int	main(void)
{
	
	if (ft_open("abc.txt") == 1)
	{
		cout << "good" << endl;		
	}
}
