#ifndef JEU_H
#define JEU_H
#include "Terrain.h"
#include "Pion.h"
#include "Score.h"
#include "debris.h"
#include "deplacement.h"
#include <vector>

class Jeu
{
    public:
        Jeu(Pion& joueur,Terrain& terrain,Score& score,deplacement deplacement);
        virtual ~Jeu();
        Terrain terrain_du_jeu() const;
        Pion joueur() const;
        std::vector<Pion> Robots() const;
        std::vector<debris> Debris() const;
        void start_game();
        void creer_debris();
        void end_Game();
        void Enregistrer()const;
        void LectureDuFichier();
        void Affichage();
        void deplacementRobot(char action);
        void actionRobots(char action1,char action2,char action3,char action4);
    private:
        Pion d_joueur;
        Terrain d_terrain;
        std::vector<Pion> d_Robots;
        Score d_score_du_jeu;
        std::vector<debris> d_Debris;
        deplacement d_deplacement;
};

#endif // JEU_H
