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
1. input_file = argv[1] s1 = argv[2] s2 = argv[3]
2. Ouvrir l'infile 
3. Verif de l'open infile
4. Lire le contenu du fichier 
5. Recherche le contenu de s1 dans le fichier avec find
6. Remplacer s1 par le contenu de s2 
7. Ecrire le contenu de line dans le fichier outfile.
8. donner a outfile , c'est le nom de infile + .replace


✅❌

ex00 ✅
ex01 ✅
ex02 ✅
ex03 ✅
ex04 ✅
ex05 ❌
