#include <iostream>
#include "Jeu.h"
#

using namespace std;
void choisir_operation(char operation,Jeu jeu)
{
    switch(operation)
    {
        case 's':
            jeu.start_game();
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
    Terrain terrain{};
    Case milieu{};
    if(terrain.nombre_lignes()%2 ==0)
    {
        milieu.modifier(1,terrain.nombre_lignes()/2);
    }else
    {
        milieu.modifier(1,(terrain.nombre_lignes()/2)+1);
    }
    Pion joueur{milieu,true,true};
    deplacement deplacement{joueur.position()};
    Score score{0,terrain.nombre_colonne()};
    Jeu jeu{joueur,terrain,score,deplacement};
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


