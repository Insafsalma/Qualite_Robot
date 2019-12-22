#include "Robot.h"
#include "deplacement.h"
#include "Case.h"
Robot :: robot()
{}
Robot :: robot( Case& position,bool moderne = true ):d_position{position}, d_type_moderne{!moderne}
{}
Robot :: ~robot ()
{}
bool Robot :: statutRobot() const
{
    return d_type_moderne;
}
Case& Robot::position const
{
    return d_position;
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

}
