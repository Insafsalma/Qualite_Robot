#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "Case.h"
class Joueur
{
      public:
        Joueur(std::string type_joueur, Case& position, int dureDeVie);
        std::string joueurType() const;
        int joueurDureDeVie() const;

    private:
        std::string d_type_joueur;
        Case& d_position;
        int d_dureDeVie;
};


#endif // JOUEUR_H
