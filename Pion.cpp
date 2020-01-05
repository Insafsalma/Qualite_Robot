#include "Pion.h"

Pion::Pion(Case& position, bool normal,bool joueur,deplacement dep):d_position{position},d_type_deplacement_normal{normal},d_type_joueur{joueur},d_deplacement{dep}
{
}
Pion::~Pion()
{

}
bool Pion::Typedeplacement() const
{
    return d_type_deplacement_normal;
}
bool Pion::TypePion() const
{
    return d_type_joueur;
}

Case& Pion::position() const
{
    return d_position;
}

void Pion:: sedeplace(char action)
{
    switch(action)
    {
        case '8':
            d_deplacement.Avancer(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
        case '2':
            d_deplacement.Reculer(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
        case '6':
            d_deplacement.TournerDroite(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
        case '4':
            d_deplacement.TournerGauche(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
        if((d_type_deplacement_normal && d_type_joueur)||(!d_type_deplacement_normal && !d_type_joueur))
       {
            case '9':
            d_deplacement.AvancerDroite(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
            case '7':
            d_deplacement.AvancerGauche(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
            case '3':
            d_deplacement.ReculerDroite(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
            case '1':
            d_deplacement.ReculerGauche(d_position);
            d_position=d_deplacement.nouvelle_position();
            break;
            default : std::cout<<"erreur"<<std::endl;
       }
    }
}

