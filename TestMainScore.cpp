#include "doctest.h"
#include "Score.h"

TEST_CASE("Vérification de score totale")
{
    SUBCASE( "Vérification de nombre de robots détruit" )
    {
        Score S{7,5};
        REQUIRE_EQ(S.nbrRobotDetruits(),7);
    }

   /* SUBCASE("Vérification de la durée de vie")
    {
    }
*/
    SUBCASE("Vérification du nombre de robot sur terrain")
    {
        Score S{7,5};
        REQUIRE_EQ(S.nbrRobotTerrain(),5);
    }
}

