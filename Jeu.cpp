#include "Jeu.h"
#include "Terrain.h"
#include <iostream>
#include <vector>

Jeu::Jeu(Pion& joueur,Terrain& terrain,int nbr_Robots):d_joueur{joueur},d_terrain{terrain}
{
    //how do I do this??????
    for(int i=0;i<nbr_Robots;++i)
    {
        Pion p{d_terrain.Cases[0]&,false};
        Pion p{Case{1,nbr_Robots},false};
        Pion p{Case{nbr_Robots,1},false};
        Pion p{Case{nbr_Robots,nbr_Robots},false};
        Pion p{Case{1,(nbr_Robots/2) +1},false};
        d_Robots.push_back(p);
    }
}
Jeu::Jeu()
{
}

Jeu::~Jeu()
{
}

void Jeu:: configurer_terrain(Terrain& terrain_config)
{
    int col, lign;
    std::cout<<"Nombre de colonnes: "<<std::endl;
    std::cin>>col;
    std::cout<<"Nombre de lignes: "<<std::endl;
    std::cin>>lign;
    terrain_config.modifier(col,lign);
}
void Jeu:: creer_terrain()
{
    Terrain t{};
    Pion joueur{Case{3,3},true};
    jeu{Joueur,t,5};
}
void Jeu:: choisir_operation(char operation)
{
    switch(operation)
    {
        case 'x':
            configurer_terrain(d_terrain);
            break;
        case 'c':
            jeu{}
            break;
        default : std::cout<<"erreur"<<std::endl;
    }
}
void Jeu:: Run_game()
{
    char operation;
    std::cout<<"Creer terrain: c | ";
    std::cout<<"Configurer terrain: x"<<std::endl;
    std::cin>>operation;
    choisir_operation(operation);
    std::cout<<"Actions possibles: \nAvancer = 8 Reculer = 2 Tourner Droite = 6 Tourner Gauche = 4 "<<std::endl;
    std::cout<<"Diagonal: Haut gauche = 7 Haut droit = 9 Bas Gauche = 1 Bas Droit = 3" <<std::endl;
    std::cout<<"Start Game: "<<std::endl;
}
