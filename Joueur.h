#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "Case.h"
#include "deplacement.h"
#include "Pion.h"

class Joueur: public Pion
{
      public:
        Joueur(Case& position,bool normal);

};




#endif // JOUEUR_H
