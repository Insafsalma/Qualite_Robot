#include "deplacement.h"
#include "Case.h"
#include "doctest.h"

TEST_CASE("vérifier déplacement est correcte")
{
    Case c{1.0,1.0};
    deplacement dep{c};
    SUBCASE("change de position correctement")
    {
        Case c1(15.0,15.0);
        dep.ChangerPosition(c,14.0,14.0);
        REQUIRE_EQ(dep.nouvelle_position().x(),c1.x());
        REQUIRE_EQ(dep.nouvelle_position().y(),c1.y());
    }
    /*SUBCASE("tourner a droite correcte")
    {
        Case c1(2.0,1.0);
        dep.TournerDroite(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("tourner a gauche correcte")
    {
        Case c1{0.0,1.0};
        dep.TournerGauche(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("avancement correcte")
    {
        Case c1(1.0,2.0);
        dep.Avancer(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("reculer correctement")
    {
        Case c1{1.0,0.0};
        dep.Reculer(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("avancer a droite correctement")
    {
        Case c1{2.0,2.0};
        dep.AvancerDroite(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("avancer a gauche correctement")
    {
        Case c1{1.0,2.0};
        dep.AvancerGauche(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("reculer a droite correctement")
    {
        Case c1{2.0,1.0};
        dep.ReculerDroite(c);
        REQUIRE_EQ(p.position,c1);
    }
    SUBCASE("reculer a gauche correctement")
    {
        Case c1{0.0,0.0};
        dep.ReculerGauche(c);
        REQUIRE_EQ(p.position,c1);
    }*/

}
