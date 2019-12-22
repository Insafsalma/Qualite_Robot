#include "Joueur.h"

Joueur::Joueur(int id_joueur, double score, string type_joueur, int dureDeVie):
        d_id_joueur{id_joueur}, d_score{score}, d_type_joueur{type_joueur}, d_dureDeVie{d_dureDeVie}{}

int Joueur::JoueureurId()const{
        return d_id_joueur;
    }

double Joueur:: joueurScore()const{
        return d_score;
}

double Joueur::Set_joueurScore(double Jscore)
{
    this.d_score=Jscore;
}

string Joueur::joueurType() const{
    return d_type_joueur;
}


int Joueur:: joueurDureDeVie()const
{
    return d_dureDeVie;
}
