#include "doctest.h"
#include "Score.h"

TEST_CASE("V�rification de score totale")
{
    SUBCASE( "V�rification de nombre de robots d�truit" )
    {
        Score S{7,5};
        REQUIRE_EQ(S.nbrRobotDetruits(),7);
    }

   /* SUBCASE("V�rification de la dur�e de vie")
    {
    }
*/
    SUBCASE("V�rification du nombre de robot sur terrain")
    {
        Score S{7,5};
        REQUIRE_EQ(S.nbrRobotTerrain(),5);
    }
}

