#include <iostream>
#include "Jeu.h"
#

using namespace std;
void choisir_operation(char operation,Jeu jeu)
{
    deplacement deplacement{jeu.joueur().position()};
    switch(operation)
    {
        case 's':
            jeu.start_game(deplacement);
            break;
        case 'x':
            jeu.configurer_terrain();
            break;
        case 'c':
            jeu.configurer_terrain();
            break;
        case 'e':
            jeu.Enregistrer();
            break;
        case 'z':
            jeu.LectureDuFichier();
            break;
        default : std::cout<<"erreur"<<std::endl;
    }
}
void Run_game()
{
    char operation;
    Case milieu{3,3};
    Pion joueur{milieu,true,true};
    Terrain terrain{};
    Score score{0,terrain.nombre_colonne()};
    Jeu jeu{joueur,terrain,score};
    std::cout<<"Creer terrain: c | ";
    std::cout<<"Configurer terrain: x |";
    std::cout<<"Start Game: s |";
    std::cout<<"Enrgistrer partie: e |";
    std::cout<<"Charger partie: z |";
    std::cout<<"Quit Game: q "<<std::endl;
    while(operation!= 'q')
    {
       std::cin>>operation;
       choisir_operation(operation,jeu);
    }
}

int main()
{
    Run_game();
}


