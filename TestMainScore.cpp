#include "doctest.h"
#include "Score.h"

TEST_CASE("Vérification de score totale")
{
    SUBCASE( "Vérification de nombre de robots détruit" )
    {
        Score S{7,5,17,55,00};
        REQUIRE_EQ(S.nbrRobotDetruits(),7);
    }

    /*SUBCASE("Vérification de la durée de vie")
    {
        Score S{7,5,17,55,00};

        REQUIRE_EQ(S.DureeDeVie()," 9:40 ");
    }*/

    SUBCASE("Vérification du nombre de robot sur terrain")
    {
        Score S{7,5,17,55,00};
        REQUIRE_EQ(S.nbrRobotTerrain(),5);
    }
}

