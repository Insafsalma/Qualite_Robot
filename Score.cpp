#include "Score.h"

Score::Score(int robot_detruit,int nbrrobotsterrain):d_nbr_robots_detruits{robot_detruit},d_nbr_robots_terrain{nbrrobotsterrain}
{ }

Score::~Score()
{ }
int nbrRobotDetruits() const
{
    return d_nbr_robots_detruits;
}

int nbrRobotTerrain() const
{
    int d_nbr_robots_terrain;
}
