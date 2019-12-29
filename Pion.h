#ifndef PION_H
#define PION_H
#include "Case.h"
#include "deplacement.h"
#include <iostream>
class Pion
{
    public:
        Pion(Case& position, bool normal,bool joueur);
        virtual ~Pion();
        virtual bool TypePion();
        virtual Case& position() const;
        virtual void sedeplace(deplacement& deplacement,char act);
    private:
        bool d_type_deplacement_normal;
        bool d_type_joueur;
        Case& d_position;
};

#endif // PION_H
