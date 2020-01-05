#include <iostream>
#include "Jeu.h"
#include "Terrain.h"

using namespace std;
void configurer_terrain(Jeu jeu)
{
    int col, lign;
    std::cout<<"Nombre de colonnes: "<<std::endl;
    std::cin>>col;
    std::cout<<"Nombre de lignes: "<<std::endl;
    std::cin>>lign;
    jeu.terrain_du_jeu().modifier(col,lign);
}
void choisir_operation(char operation,Jeu jeu)
{
    switch(operation)
    {
        case 's':
            jeu.start_game();
            break;
        case 'x':
            configurer_terrain(jeu);
            break;
        case 'c':
            configurer_terrain(jeu);
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
    Case milieu=terrain.Cases()[terrain.taille_terrain()/2];
    /*if(terrain.nombre_lignes()%2 ==0)
    {
        milieu.modifier(1,terrain.nombre_lignes()/2);
    }else
    {
        milieu.modifier(1,(terrain.nombre_lignes()/2)+1);
    }*/
    deplacement deplacement{milieu};
    Pion joueur{milieu,true,true,deplacement};
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


