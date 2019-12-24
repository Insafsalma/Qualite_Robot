#include <iostream>
#include "Terrain.h"

using namespace std;

void configurer_terrain(Terrain& terrain_config)
{
    int col, lign;
    std::cout<<"Nombre de colonnes: "<<std::endl;
    std::cin>>col;
    std::cout<<"Nombre de lignes: "<<std::endl;
    std::cin>>lign;
    terrain_config.modifier(col,lign);
}
void creer_terrain()
{
    Terrain terrain{};
}
void choisir_operation(char operation)
{
    Terrain terrain{};
    switch(operation)
    {
        case 'x':
            configurer_terrain(terrain);
            break;
        case 'c':
            creer_terrain();
            break;
        default : std::cout<<"erreur"<<std::endl;
    }
}
void Run_game()
{
    char operation;
    std::cout<<"Creer terrain: c | ";
    std::cout<<"Configurer terrain: x"<<std::endl;
    std::cin>>operation;
    choisir_operation(operation);
    std::cout<<"Start Game: "<<std::endl;
    std::cout<<"Actions possibles: \nAvancer = 8 Reculer = 2 Tourner Droite = 6 Tourner Gauche = 4 "<<std::endl;
    std::cout<<"Diagonal: Haut gauche = 7 Haut droit = 9 Bas Gauche = 1 Bas Droit = 3" <<std::endl;
}

int main()
{
    Run_game();
}


