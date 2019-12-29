#ifndef SCORE_H
#define SCORE_H
#include <string>
#include <ctime>
class Score
{
   public:
        Score(int robot_detruit,int nbr_robots_terrain);
        virtual ~Score();
        int nbrRobotDetruits() const;
        int nbrRobotTerrain() const;
        int DebutDeVie() const;
        std::string DureeDeVie()const;
        void ScoreFinal()const;
    private:
    int d_nbr_robots_detruits;
    int d_nbr_robots_terrain;
};

#endif // SCORE_H
