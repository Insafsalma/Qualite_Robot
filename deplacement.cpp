#include "deplacement.h"

deplacement::deplacement(Case& position):d_position{position}{}

Case& deplacement:: nouvelle_position() const
{
    return d_position;
}
void deplacement::Avancer(Case& position_init)
{
    d_position.modifier(position_init.x(),position_init.y()+1);
}

void deplacement::Reculer(Case& position_init)
{
    d_position.modifier(position_init.x(),position_init.y()-1);
}

void deplacement::TournerDroite(Case& position_init)
{
    d_position.modifier(position_init.x()+1,position_init.y());
}

void deplacement::TournerGauche(Case& position_init)
{
    d_position.modifier(position_init.x()-1,position_init.y());
}

void deplacement::AvancerDroite(Case& position_init)
{
    d_position.modifier(position_init.x()+1,position_init.y()+1);
}

void deplacement::AvancerGauche(Case& position_init)
{
    d_position.modifier(position_init.x()-1,position_init.y()+1);
}

void deplacement::ReculerDroite(Case& position_init)
{
    d_position.modifier(position_init.x()+1,position_init.y()-1);
}

void deplacement::ReculerGauche(Case& position_init)
{
    d_position.modifier(position_init.x()-1,position_init.y()-1);
}

deplacement::~deplacement()
{
    //dtor
}
