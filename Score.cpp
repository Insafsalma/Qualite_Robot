#include <iostream>
#include "Score.h"
#include <ctime>

Score::Score(int robot_detruit,int nbr_robots_terrain ):d_nbr_robots_detruits{robot_detruit},d_nbr_robots_terrain{nbr_robots_terrain}
{ }

Score::~Score()
{ }

int Score::nbrRobotDetruits() const
{
    return d_nbr_robots_detruits;
}

int Score::DebutDeVie() const
{
            time_t timer1;
            time(&timer1);
            int s, m, h;
            struct tm *newTime1;
            newTime1 = localtime(&timer1);
            h = newTime1->tm_hour;		// Les heures sont dans "heures"
            m = newTime1->tm_min;		// Les end_minutes sont dans "minutes"
            s = newTime1->tm_sec;		// Les end_secondes sont dans "end_secondes"

            int TotaleSeconds1= (h*3600)+(m*60)+s;
            return TotaleSeconds1;
}

std::string Score::DureeDeVie()const
{
            time_t timer2;
            time(&timer2);
            int s2, m2, h2;
            struct tm *newTime2;
            newTime2 = localtime(&timer2);
            h2 = newTime2->tm_hour;
            m2 = newTime2->tm_min;
            s2 = newTime2->tm_sec;
            int TotaleSeconds2=(h2*3600)+(m2*60)+s2;
            int TimeS=TotaleSeconds2-DebutDeVie();

           // int Ha= (TimeS/3600);
            int Ma= (TimeS/60);
            int Sa= (TimeS%60);
            std::cout<<" La durée de jeu est : " <<Ma <<" : "<< Sa<<std::endl;

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



