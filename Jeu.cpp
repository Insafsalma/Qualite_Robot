#include "Jeu.h"
#include "Terrain.h"
#include "Pion.h"
#include "debris.h"
#include "Score.h"
#include "deplacement.h"
#include <iostream>
#include <vector>
#include <fstream>

Jeu::Jeu(Pion& joueur,Terrain& terrain,Score& score,deplacement deplacement):d_joueur{joueur},d_terrain{terrain},d_score_du_jeu{score},d_deplacement{deplacement}
{
    int taille = d_terrain.taille_terrain();
    int colonnes = d_terrain.nombre_colonne();
    for(int i=0;i<colonnes/2;++i)
    {
        Pion p{d_terrain.Cases()[i],true,false,d_deplacement};
        d_Robots.push_back(p);
        Pion p1{d_terrain.Cases()[taille-1],true,false,d_deplacement};
        d_Robots.push_back(p1);
        --taille;
    }
}
Terrain Jeu::terrain_du_jeu() const
{
    return d_terrain;
}
Pion Jeu::joueur() const
{
    return d_joueur;
}
std::vector<Pion> Jeu:: Robots() const
{
    return d_Robots;
}
std::vector<debris> Jeu::Debris() const
{
    return d_Debris;
}
void Jeu::actionRobots(char action1,char action2,char action3,char action4)
{
    for(auto r: d_Robots)
        {
            if(r.position().y()>d_joueur.position().y())
            {
                r.sedeplace(action1);
            }else{
                if(r.position().y()<d_joueur.position().y())
                {
                   r.sedeplace(action2);
                }else{
                    if(r.position().x()>d_joueur.position().x())
                    {
                        r.sedeplace(action3);
                    }else
                    {
                        if(r.position().x()<d_joueur.position().x())
                        {
                            r.sedeplace(action4);
                        }else
                        {
                            end_Game();
                        }
                    }
                }

            }
        }
}
void Jeu::deplacementRobot(char action)
{
    char av=8,rec=2,droit=6,gauche=4;

    switch(action)
    {
        case '8':
            actionRobots(rec,av,gauche,droit);
            break;
        case '6':
            actionRobots(rec,av,gauche,droit);
            break;
        case '4':
            actionRobots(av,rec,droit,gauche);
            break;
        case '2':
            actionRobots(av,rec,droit,gauche);
            break;
    }
}
void Jeu::creer_debris()
{
    Case position{d_Robots[0].position()};
    int taille=d_Robots.size();
    for(int i=1;i<=taille;++i)
    {
        if(d_Robots[i].position()== position)
        {
            d_Robots[i].swap(d_Robots[taille]);
            d_Robots.pop_back();
        }
    }
    debris debris(position);
    d_Debris.push_back(debris);
}
void Jeu::end_Game()
{
    std::cout <<"le jeu est términé"<<std:: endl;
    std::cout<<"votre durée de vie est: "<<d_score_du_jeu.DureeDeVie();
}
void Jeu::Affichage()
{
    std::cout<<"Le terrain contient : "<< d_terrain.taille_terrain()<< " cases"<<std::endl;
    std::cout<<"Le joueur est sur la case: "<<d_joueur.position().x()<<","<<d_joueur.position().y()<<std::endl;
    for(auto r : d_Robots)
    {
       std::cout<<"Le Robot est sur la case: "<<r.position().x()<<","<<r.position().y()<<std::endl;
    }
    std::cout<<"Actions possibles: \nAvancer = 8 Reculer = 2 Tourner Droite = 6 Tourner Gauche = 4 "<<std::endl;
    std::cout<<"Diagonal: Haut gauche = 7 Haut droit = 9 Bas Gauche = 1 Bas Droit = 3" <<std::endl;
}
void Jeu::start_game()
{
    char action;
    d_score_du_jeu= Score{0,d_Robots.size()};
    Affichage();
    while(action!='q' || action!='e' || action!='z')
    {
        std::cin>>action;
        d_score_du_jeu.DebutDeVie();
        d_joueur.sedeplace(action);
        std::cout<<"Le joueur s'est deplace vers la case: "<<d_joueur.position().x()<<","<<d_joueur.position().y()<<std::endl;
        deplacementRobot(action);
        for(auto r : d_Robots)
        {
            std::cout<<"Le robot s'est deplace vers la case: "<<r.position().x()<<","<<r.position().y()<<std::endl;
        }
        creer_debris();
        if(d_Robots.size()== 0)
        {
            end_Game();
        }else
        {
            for(auto r : d_Robots)
            {
                if(r.position()==d_joueur.position())
                {
                    end_Game();
                }
            }
        }
    }
}
void Jeu:: Enregistrer()const
{
    std::ofstream fichier("jeu.txt", std::ios::out | std::ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert

        if(fichier)
        {
                fichier << d_terrain.nombre_colonne() << std::endl; // Le nombre de colonne
                fichier << d_terrain.nombre_lignes()<< std::endl; // Le nombre des lignes
                fichier << d_terrain.taille_terrain() << std::endl; // La taille du terrain
                fichier << d_score_du_jeu.DureeDeVie()  << std::endl; //Duréé
                fichier << d_joueur.position().x()<< std::endl; //La position du joueur
                fichier << d_joueur.position().y()<< std::endl;
                fichier.close();
        }
        else{
                std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;

        }
}

void Jeu :: LectureDuFichier()
{
    std::ifstream fichier("jeu.txt");

        if(fichier)
        {
            //fichier >>d_terrain.nombre_colonne()>> d_terrain.nombre_lignes()>>d_terrain.taille_terrain()>>d_score_du_jeu.DureeDeVie()>>d_joueur.position();
            fichier.close();
        }
        else
        {
             std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
        }
}
Jeu::~Jeu()
{
}
