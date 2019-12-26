#include <iostream>
#include "Score.h"
#include <chrono>
#include <ctime>

Score::Score(int robot_detruit,int nbr_robots_terrain):d_nbr_robots_detruits{robot_detruit},d_nbr_robots_terrain{nbr_robots_terrain}
{ }

Score::~Score()
{ }

int Score::nbrRobotDetruits() const
{
    return d_nbr_robots_detruits;
}

std::string Score::DureeDeVie() const
{
   time_t actuel = time(0);
   tm *ltm = localtime(&actuel);
   int end_min= 1 + ltm->tm_min ;
   int end_sec= 1 + ltm->tm_sec;
   int TotalSecond= ((end_min-d_start_min)*60)+(end_sec-d_start_sec);

   return TotalSecond/60 +" : " +TotalSecond%60 ;

}
int Score::nbrRobotTerrain() const
{
    return d_nbr_robots_terrain;
}

void Score:: ScoreFinal()const
{

    std::cout<<" Votre Score final : "<<std::endl;
   std::cout<<" Votre durée de vie est : " << DureeDeVie()<<std::endl;
    std::cout<<" Le nombre de robot que vous avez détruit : " << nbrRobotDetruits() <<std::endl;

}


