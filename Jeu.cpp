#include "Jeu.h"
#include "Terrain.h"
#include "Pion.h"
#include <iostream>
#include <vector>
Jeu::Jeu(Pion& joueur,Terrain& terrain):d_joueur{joueur},d_terrain{terrain}
{
    //how do I do this??????
    int taille = d_terrain.taille_terrain();
    int colonnes=d_terrain.nombre_colonne();
    for(int i=0;i<colonnes/2;++i)
    {
        Pion p{d_terrain.Cases()[i],true,false};
        d_Robots.push_back(p);
    }
    for(int i=(colonnes/2)+1;i<colonnes;++i)
    {
        Pion p{d_terrain.Cases()[taille-1],true,false};
        d_Robots.push_back(p);
        --taille;
    }
}

Jeu::~Jeu()
{
}
void Jeu::configurer_terrain()
{
    int col, lign;
    std::cout<<"Nombre de colonnes: "<<std::endl;
    std::cin>>col;
    std::cout<<"Nombre de lignes: "<<std::endl;
    std::cin>>lign;
    d_terrain.modifier(col,lign);
}
void Jeu::creer_terrain()
{
    configurer_terrain();
}
Terrain Jeu::terrain_du_jeu() const
{
    return d_terrain;
}
Pion Jeu::joueur() const
{
    return d_joueur;
}
void Jeu::start_game(deplacement deplacement)
{
    char action;
    std::cout<<"Le terrain contient : "<< d_terrain.taille_terrain()<< " cases"<<std::endl;
    std::cout<<"Le joueur est sur la case: "<<d_joueur.position().x()<<","<<d_joueur.position().y()<<std::endl;
    for(auto r : d_Robots)
    {
       std::cout<<"Le Robot est sur la case: "<<r.position().x()<<","<<r.position().y()<<std::endl;
    }
    std::cout<<"Actions possibles: \nAvancer = 8 Reculer = 2 Tourner Droite = 6 Tourner Gauche = 4 "<<std::endl;
    std::cout<<"Diagonal: Haut gauche = 7 Haut droit = 9 Bas Gauche = 1 Bas Droit = 3" <<std::endl;
    while(action!='q')
    {
        std::cin>>action;
        d_joueur.sedeplace(deplacement,action);
        std::cout<<"Le joueur s'est déplacé à la case: "<<d_joueur.position().x()<<","<<d_joueur.position().y()<<std::endl;
    }
}

