#include "deplacement.h"
#include "Case.h"


deplacement::deplacement(Case& position):d_position{position}{}

Case& deplacement:: nouvelle_position() const
{
    return d_position;
}
void deplacement:: modifier(Case position)
{
    d_position=position;
}

void deplacement::ChangerPosition(Case& position_init,int x,int y)
{
    d_position.modifier(position_init.x()+x,position_init.y()+y);
}

void deplacement::Avancer(Case& position_init)
{
    ChangerPosition(position_init,0,1);
    //d_position.modifier(position_init.x(),position_init.y()+1);
}

void deplacement::Reculer(Case& position_init)
{
        ChangerPosition(position_init,0,-1);
       //d_position.modifier(position_init.x(),position_init.y()-1);
}

void deplacement::TournerDroite(Case& position_init)
{
        ChangerPosition(position_init,1,0);
     //d_position.modifier(position_init.x()+1,position_init.y());
}

void deplacement::TournerGauche(Case& position_init)
{
        ChangerPosition(position_init,-1,0);

    //d_position.modifier(position_init.x()-1,position_init.y());
}

void deplacement::AvancerDroite(Case& position_init)
{
        ChangerPosition(position_init,1,1);
    //d_position.modifier(position_init.x()+1,position_init.y()+1);
}

void deplacement::AvancerGauche(Case& position_init)
{
        ChangerPosition(position_init,-1,1);
       // d_position.modifier(position_init.x()-1,position_init.y()+1);
}

void deplacement::ReculerDroite(Case& position_init)
{
        ChangerPosition(position_init,1,-1);
        //d_position.modifier(position_init.x()+1,position_init.y()-1);
}

void deplacement::ReculerGauche(Case& position_init)
{
        ChangerPosition(position_init,-1,-1);
       //d_position.modifier(position_init.x()-1,position_init.y()-1);
}

deplacement::~deplacement()
{
    //dtor
}
