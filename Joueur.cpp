#include "Joueur.h"
#include "deplacement.h"
#include "Case.h"

Joueur::Joueur(std::string type_joueur,Case& position, int dureDeVie):d_type_joueur{type_joueur},d_position{position}, d_dureDeVie{d_dureDeVie}{}

std::string Joueur::joueurType() const{
    return d_type_joueur;
}

int Joueur:: joueurDureDeVie()const
{
    return d_dureDeVie;
}
void Robot::sedeplace(deplacement& deplacement,char act)
{
    switch(act)
    {
        case '8':
            deplacement.Avancer(d_position);
            d_position=deplacement.nouvelle_position();
            break;
        case '2':
            deplacement.Reculer(d_position);
            d_position=deplacement.nouvelle_position();
            break;
        case '6':
            deplacement.TournerDroite(d_position);
            d_position=deplacement.nouvelle_position();
            break;
        case '4':
            deplacement.TournerGauche(d_position);
            d_position=deplacement.nouvelle_position();
            break;
        if(d_type_moderne)
       {
            case '9':
            deplacement.AvancerDroite(d_position);
            d_position=deplacement.nouvelle_position();
            break;
            case '7':
            deplacement.AvancerGauche(d_position);
            d_position=deplacement.nouvelle_position();
            break;
            case '3':
            deplacement.ReculerDroite(d_position);
            d_position=deplacement.nouvelle_position();
            break;
            case '1':
            deplacement.ReculerGauche(d_position);
            d_position=deplacement.nouvelle_position();
            break;
       }
    }
