#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "Case.h"
#include "deplacement.h"

class Joueur:public Pion
{
      public:
        Joueur(Case& position,bool normal);
        virtual bool TypePion()override;
        void sedeplace(deplacement& deplacement);
    private:

};




#endif // JOUEUR_H
