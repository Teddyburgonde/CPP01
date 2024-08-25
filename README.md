**EX00**

```c
1. Cree une class Zombie. ok
2. Cree un attribut privé du nom de name. ok
3. Ajouter une fonction void announce (void) a la class Zombie. ok
4. Cree la fonction void    Zombie::announce(void); 
On doit afficher :   name : BraiiiiiinnnzzzZ...
5. Cree une function void	Zombie::randomChump(std::string name)
Cree un object de la class Zombie
Lui donner un nom
Utiliser la fonction announce sur le zombie(Objet) que vous venez de creer.
6. Zombie* newZombie( std::string name );

```

**EX01**

```c
1. Ajouter le prototype de la function  
2. Coder la fonction :
- À l'intérieur de cette fonction, allouez dynamiquement un tableau de N objets Zombie 
    à l'aide de l'opérateur new[]. 
- Parcourez le tableau de N zombies et initialisez chacun avec le nom passé en paramètre.
- return Zombie. 
- Utiliser announce() pour chacun des zombies.
- Supprimer les zombies delete[] ??? 
```


**EX02**

```c
std::string s1 = "HI THIS IS BRAIN";

    std::string *stringPTR = &s1;
    
    std::string &stringREF = s1;
    
    
    // Adresse memoire de la variable string
    std::cout << &s1 <<std::endl;
    
    // Adresse memoire détenue par stringPTR 
    std::cout << stringPTR <<std::endl;
    
    // Adresse memoire détenue par stringREF
    std::cout << &stringREF <<std::endl;

    // La valeur de la variable string 
    std::cout << s1 << std::endl;

    // La valeur pointer par stringPTR
    std::cout << *stringPTR <<std::endl;

    // La valeur indiqué par stringREF
    std::cout << stringREF <<std::endl;
```

**EX03**

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) 
{
    
}


HumanB::HumanB(const std::string& name, Weapon& weapon) : name(name), weapon(&weapon)
{
    
}


**EX04**

```c
//int ft_open(std::string name_of_file, char *s1, char *s2)
// & permet de ne pas creer de nouvelle copie dans la memoire
void ft_open(const std::string& name_of_file)
{
	
	string	line;
	
	// Open file
	ifstream inputFile("abc.txt");
	// Verif open
	if (!inputFile.is_open())
	{
		cerr << "Error opening the file!" << endl;
		return ;
	}
	// lire le fichier et on lenvoie sur la sortie standard
	while (getline(inputFile, line))
	{
		cout << line << endl;
	}
	// close
	inputFile.close();
}

int	main(void)
{
	
	ft_open(std::string("abc.txt"));
}
```

Créez un programme qui prend trois paramètres dans l'ordre suivant : un nom de fichier, puis deux chaînes de caractères, s1 et s2.
Il ouvrira le fichier <nom de fichier> et copiera son contenu dans un nouveau fichier <nom de fichier>.replace, en remplaçant chaque occurrence de s1 par s2.

L'utilisation des fonctions de manipulation de fichiers en C est interdite et sera considérée comme de la triche.
Toutes les fonctions membres de la classe std::string sont autorisées, à l'exception de replace. Utilisez-les judicieusement !

Bien entendu, gérez les entrées inattendues et les erreurs. Vous devez créer et soumettre vos propres tests pour vous assurer que votre programme fonctionne comme prévu.



✅❌

ex00 ✅
ex01 ✅
ex02 ✅
ex03 ✅
ex04 ❌
ex05 ❌
