#ifndef DEPLACEMENT_H
#define DEPLACEMENT_H

#include "Case.h"
class deplacement
{
    public:
        deplacement(Case& position);
        virtual ~deplacement();
        void ChangerPosition(Case& position_init,int x,int y);
        void TournerDroite(Case& position_init);
        void TournerGauche(Case& position_init);
        void Avancer(Case& position_init);
        void Reculer(Case& position_init);
        void AvancerDroite(Case& position_init);
        void AvancerGauche(Case& position_init);
        void ReculerDroite(Case& position_init);
        void ReculerGauche(Case& position_init);
        Case& nouvelle_position() const;
     private:
        Case& d_position;
};


#endif // DEPLACEMENT_H
