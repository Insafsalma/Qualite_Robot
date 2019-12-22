#ifndef SCORE_H
#define SCORE_H


class Score
{
   public:
        Score(int robot_detruit,int nbrrobotsterrain);
        virtual ~Score();
        int nbrRobotDetruits() const;
        int nbrRobotTerrain() const;
    private:
    int d_nbr_robots_detruits;
    int d_nbr_robots_terrain;
};

#endif // SCORE_H
