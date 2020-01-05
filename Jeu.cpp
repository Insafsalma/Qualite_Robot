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
void Jeu::configurer_terrain()
{
    int col, lign;
    std::cout<<"Nombre de colonnes: "<<std::endl;
    std::cin>>col;
    std::cout<<"Nombre de lignes: "<<std::endl;
    std::cin>>lign;
    d_terrain.modifier(col,lign);
}
void Jeu::creer_debris()
{
    Case position {d_Robots[0].position()};
    for(int i=1;i<=d_Robots.size();++i)
    {
        if(d_Robots[i].position()== position)
        {
           // d_Robots.erase(d_Robots.begin()+i);
           // ca cause l'erreur de pion operator = pion&
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
void Jeu::actionRobots(char action1,char action2,char action3,char action4)
{
    for(int i=1;i<=d_Robots.size();++i)
        {
            if(d_Robots[i].position().y()>d_joueur.position().y())
            {
                d_Robots[i].sedeplace(2);
            }else{
                if(d_Robots[i].position().y()<d_joueur.position().y())
                {
                   d_Robots[i].sedeplace(8);
                }else{
                    if(d_Robots[i].position().x()>d_joueur.position().x())
                    {
                        d_Robots[i].sedeplace(4);
                    }else
                    {
                        if(d_Robots[i].position().x()<d_joueur.position().x())
                        {
                            d_Robots[i].sedeplace(6);
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
    switch(action)
    {
        case '8':
            actionRobots(2,8,4,6);
            break;
        case '6':
            actionRobots(2,8,4,6);
            break;
        case '4':
            actionRobots(8,2,6,4);
            break;
        case '2':
            actionRobots(8,2,6,4);
            break;
}}
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
        std::cout<<"Le joueur s'est déplacé à la case: "<<d_joueur.position().x()<<","<<d_joueur.position().y()<<std::endl;
        //déplacementRobot();
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
                fichier << d_joueur.TypePion() << std::endl; // le type du joueur soit expert soit normal
                fichier << d_score_du_jeu.nbrRobotTerrain() <<std::endl; //nombre de robots sur terrain
                fichier << d_Debris.size() <<std::endl;

                fichier << d_Robots.size() << std::endl;
                    for(int i=1;i<=d_Robots.size();++i)
                    {
                        fichier << d_Robots[i].position().x() <<std::endl; //placement x de robot
                        fichier << d_Robots[i].position().y() <<std::endl; //placement y de robot
                    }

                    for( int i=1;i<=d_Debris.size();++i)
                    {
                        fichier << d_Debris[i].position_debris().x() << std::endl;
                        fichier << d_Debris[i].position_debris().y() << std::endl;
                    }
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
