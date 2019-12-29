#include "deplacement.h"
#include "Case.h"
#include "doctest.h"

TEST_CASE("vérifier déplacement est correcte")
{
    Case c{1,1};
    deplacement dep{c};
    SUBCASE("change de position correctement")
    {
        Case c1(15,15);
        dep.ChangerPosition(c,14,14);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("tourner a droite correcte")
    {
        Case c1(2,1);
        dep.TournerDroite(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("tourner a gauche correcte")
    {
        Case c1{0,1};
        dep.TournerGauche(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("avancement correcte")
    {
        Case c1(1,2);

        dep.Avancer(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("reculer correctement")
    {
        Case c1{1,0};
        dep.Reculer(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("avancer a droite correctement")
    {
        Case c1{2,2};
        dep.AvancerDroite(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("avancer a gauche correctement")
    {
        Case c1{0,2};
        dep.AvancerGauche(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("reculer a droite correctement")
    {
        Case c1{2,0};
        dep.ReculerDroite(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    SUBCASE("reculer a gauche correctement")
    {
        Case c1{0,0};
        dep.ReculerGauche(c);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }

}
