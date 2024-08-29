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

```c

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


```

**EX05**

Le but de l'exercice est d'apprendre à utiliser des pointeurs sur fonctions 



✅❌

ex00 ✅
ex01 ✅
ex02 ✅
ex03 ✅
ex04 ✅
ex05 ❌
