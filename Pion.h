#ifndef PION_H
#define PION_H
#include "Case.h"
#include "deplacement.h"
#include <iostream>
class Pion
{
    public:
        Pion(Case& position, bool normal,bool joueur);
        ~Pion();
        bool Typedeplacement() const;
        bool TypePion() const;
        Case& position() const;
        void sedeplace(deplacement& deplacement,char act);
        void swap(Pion pion);
        void modifier(Pion pion);
    private:
        bool d_type_deplacement_normal;
        bool d_type_joueur;
        Case& d_position;
};

#endif // PION_H
