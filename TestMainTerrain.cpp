#include "Terrain.h"
#include "doctest.h"
#include "Case.h"

TEST_CASE("Verifier le terrain")
{
    Terrain t{3,4};
    SUBCASE("taille  du terrain correcte")
    {
        REQUIRE_EQ(t.taille_terrain(),3*4);
    }
    SUBCASE("modification du terrain correcte")
    {
        t.modifier(5,5);
        REQUIRE_EQ(t.taille_terrain(),25);
        REQUIRE_EQ(t.Cases().size(),25);
    }
    SUBCASE("Le terrain est rempli correctement")
    {
        Case c{1,1};
        t.remplir_terrain();
        REQUIRE_EQ(t.Cases().size(),12);
        REQUIRE_EQ(t.Cases()[0],c);
    }
}
