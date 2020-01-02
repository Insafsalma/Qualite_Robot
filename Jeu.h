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
        void start_game(deplacement deplacement);
        void creer_debris();
        void end_Game();
        void Enregistrer()const;
        void LectureDuFichier();
        void Affichage();
    private:
        Terrain d_terrain;
        Pion d_joueur;
        std::vector<Pion> d_Robots;
        Score d_score_du_jeu;
        std::vector<debris> d_Debris;
};

#endif // JEU_H
