#ifndef JEU_H
#define JEU_H
#include "Terrain.h"
#include "Pion.h"
#include <vector>

class Jeu
{
    public:
        Jeu();
        Jeu(Pion& joueur,Terrain& terrain,int nbr_Robots);
        virtual ~Jeu();
        void creer_terrain();
        void configurer_terrain(Terrain& terrain_config);
        void choisir_operation(char operation);
        void Run_game();
    private:
        Terrain d_terrain;
        Pion d_joueur;
        std::vector<Pion> d_Robots;

};

#endif // JEU_H
