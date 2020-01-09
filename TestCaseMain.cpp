#include "doctest.h"
#include "Case.h"

TEST_CASE("Verifier la case")
{
    Case c{3,4};
    SUBCASE("modification de la case correcte")
    {
        c.modifier(5,5);
        REQUIRE_EQ(c.x(),5);
        REQUIRE_EQ(c.y(),5);
    }
    SUBCASE("La comparaison des deux cases est correcte")
    {
        Case c1{3,4};
        REQUIRE_EQ(c.x(),c1.x());
        REQUIRE_EQ(c.y(),c1.y());
    }
}
