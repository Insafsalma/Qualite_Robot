#ifndef JEU_H
#define JEU_H
#include "Terrain.h"
#include "Pion.h"
#include "Score.h"
#include <vector>

class Jeu
{
    public:
        Jeu(Pion& joueur,Terrain& terrain,Score& score);
        virtual ~Jeu();
        void configurer_terrain();
        Terrain terrain_du_jeu() const;
        void creer_terrain();
        Pion joueur() const;
        void start_game(deplacement deplacement);
        void creer_debris();
        void end_Game();
    private:
        Terrain d_terrain;
        Pion d_joueur;
        std::vector<Pion> d_Robots;
        Score d_score_du_jeu;
};

#endif // JEU_H
