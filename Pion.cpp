#include "Pion.h"

Pion::Pion(Case& position, bool normal,bool joueur):d_position{position},d_type_deplacement_normal{normal},d_type_joueur{joueur}
{
}
Pion::~Pion()
{

}

bool Pion::TypePion()
{
    return d_type_deplacement_normal;
}

Case& Pion::position() const
{
    return d_position;
}

void Pion:: sedeplace(deplacement& deplacement,char action)
{
    switch(action)
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
        if((d_type_deplacement_normal && d_type_joueur)||(!d_type_deplacement_normal && !d_type_joueur))
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
            default : std::cout<<"erreur"<<std::endl;
       }
    }
}

