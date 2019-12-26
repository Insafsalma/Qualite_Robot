#ifndef SCORE_H
#define SCORE_H
#include <chrono>
#include <ctime>


class Score
{
   public:
        Score(int robot_detruit,int nbr_robots_terrain);
        virtual ~Score();
        int nbrRobotDetruits() const;
        int nbrRobotTerrain() const;
        std::string DureeDeVie() const;
        void ScoreFinal()const;
    private:
    int d_nbr_robots_detruits;
    int d_nbr_robots_terrain;
    int d_start_min;
    int d_start_sec;
    std::chrono::time_point<std::chrono::system_clock> d_start;
};

#endif // SCORE_H
