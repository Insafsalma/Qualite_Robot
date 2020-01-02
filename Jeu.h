#ifndef JEU_H
#define JEU_H
#include "Terrain.h"
#include "Pion.h"
#include "Score.h"
#include "debris.h"
#include <vector>

class Jeu
{
    public:
        Jeu(Pion& joueur,Terrain& terrain,Score& score);
        virtual ~Jeu();
        Terrain terrain_du_jeu() const;
        Pion joueur() const;
        void configurer_terrain();
        void creer_terrain();
        void Enregistrer()const;
        void LectureDuFichier() const;
        void start_game(deplacement deplacement);
        void creer_debris();
        void end_Game();
    private:
        Terrain d_terrain;
        Pion d_joueur;
        std::vector<Pion> d_Robots;
        Score d_score_du_jeu;
        std::vector<debris> d_Debris;
};

#endif // JEU_H


#endif // JEU_H
