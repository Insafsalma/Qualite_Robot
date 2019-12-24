#include "Pion.h"

Pion::Pion()
{}
Pion::Pion(Case& position, bool normal):d_position{position},d_normal{normal}{}
Pion::~Pion()
{

}

virtual bool Pion::TypePion()
{
    return d_normal;
}

virtual Case& Pion::position const override
{
    return d_position;
}

void Pion:: sedeplace(deplacement& deplacement,char action,std::ostream& ost)
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
            default : ost<<"erreur"<<std::endl;
       }
    }
}

