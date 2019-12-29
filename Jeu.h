#ifndef JEU_H
#define JEU_H
#include "Terrain.h"
#include "Pion.h"
#include <vector>

class Jeu
{
    public:
        Jeu(Pion& joueur,Terrain& terrain);
        virtual ~Jeu();
        void configurer_terrain();
        Terrain terrain_du_jeu() const;
        void creer_terrain();
        Pion joueur() const;
        void start_game(deplacement deplacement);
    private:
        Terrain d_terrain;
        Pion d_joueur;
        std::vector<Pion> d_Robots;

};

#endif // JEU_H
