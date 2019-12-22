#include "Score.h"

Score::Score(int robot_detruit,int nbr_robots_terrain):d_nbr_robots_detruits{robot_detruit},d_nbr_robots_terrain{nbr_robots_terrain}
{ }

Score::~Score()
{ }
int Score::nbrRobotDetruits() const
{
    return d_nbr_robots_detruits;
}

int Score::nbrRobotTerrain() const
{
    return d_nbr_robots_terrain;
}
