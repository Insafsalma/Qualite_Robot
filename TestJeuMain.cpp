#include "Jeu.h"
#include "Terrain.h"
#include "Pion.h"
#include "debris.h"
#include "Score.h"
#include "deplacement.h"
#include "doctest.h"

TEST_CASE("Jeu fonctionne correctement")
{
    Terrain terrain{};
    Case milieu{3,3};
    deplacement deplacement{milieu};
    Pion joueur{milieu,true,true,deplacement};
    Score score{0,terrain.nombre_colonne()};
    Jeu jeu{joueur,terrain,score,deplacement};
    SUBCASE("les robots sont bien ajoutés")
    {
        int nbrRobots = jeu.terrain_du_jeu().nombre_colonne()/2;
        REQUIRE_EQ(jeu.Robots().size(),nbrRobots*2);
    }
    SUBCASE("Robots se deplace correctement")
    {
        jeu.deplacementRobot(8);
        REQUIRE_EQ(jeu.Robots()[0].position().x(),1);
        REQUIRE_EQ(jeu.Robots()[0].position().y(),2);
        REQUIRE_EQ(jeu.Robots()[1].position().x(),5);
        REQUIRE_EQ(jeu.Robots()[1].position().y(),4);
    }
    SUBCASE("débris créé correctement")
    {
        //jeu.Robots()[0].sedeplace(6);
        //jeu.creer_debris();
        //REQUIRE_EQ(jeu.Debris().size(),1);
        //REQUIRE_EQ(jeu.Debris()[0].position_debris(),jeu.Robots()[1].position());
    }
}

