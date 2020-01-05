#include "Pion.h"
#include "doctest.h"
#include "deplacement.h"
#include "Case.h"

TEST_CASE(" vérifer le que le pion se dépéplace correctement ")
{
    std::ostream& ost{std::cout};
    Case C{10.00,15.00};
    deplacement  D {C};
    Pion P{C,false,true};
 SUBCASE("pion avance correcetemnt")
 {
    Case C1{10,16};
    P.sedeplace(D,8);
    REQUIRE_EQ(P.position().x(),C1.x());
    REQUIRE_EQ(P.position().y(),C1.y());
 }
/* SUBCASE("pion recule  correcetemnt")
 {
      Case C1{10.00,14.00};
      P.sedeplacer(D,2,ost);
      REQUIRE_EQ(P.position(),C1);
 }
  SUBCASE("pion tourne bien adroite")
 {
      Case C1{11.00,15.00};
      P.sedeplacer(D,6,ost);
      REQUIRE_EQ(P.position(),C1);
 }
 SUBCASE("pion tourne bien agauche")
 {
      Case C1{09.00,15.00};
      P.sedeplacer(D,4,ost);
      REQUIRE_EQ(P.position(),C1);
 }
 SUBCASE("pion type Normal")
 {


 SUBCASE("pion avanceDroite  ")
 {
   Case C1{11.00,16.00};
      P.sedeplacer(D,9,ost);
      REQUIRE_EQ(P.position(),C1);
 }

 SUBCASE("pion avanceGauche  ")
 {
   Case C1{09.00,15.00};
      P.sedeplacer(D,7,ost);
      REQUIRE_EQ(P.position(),C1);
 }
 SUBCASE("pion ReculeDroite  ")
 {
   Case C1{10.00,14.00};
      P.sedeplacer(D,3,ost);
      REQUIRE_EQ(P.position(),C1);
 }
 SUBCASE("pion ReculeGauche ")
 {
   Case C1{09.00,14.00};
      P.sedeplacer(D,1,ost);
      REQUIRE_EQ(P.position(),C1);
 }
 }*/
}

