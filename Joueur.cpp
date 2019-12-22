#include "Joueur.h"

Joueur::Joueur(std::string type_joueur,Case& position, int dureDeVie):d_type_joueur{type_joueur},d_position{position}, d_dureDeVie{d_dureDeVie}{}

std::string Joueur::joueurType() const{
    return d_type_joueur;
}

int Joueur:: joueurDureDeVie()const
{
    return d_dureDeVie;
}
