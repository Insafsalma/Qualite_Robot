#include "Robot.h"

Robot :: robot()
{}
Robot :: robot( double x,double y, double ditrection):d_x{x},d_y{y}, d_direction{ditrection}
{}
Robot :: ~robot ()
{}
bool Robot :: statutRobot() const
{
    return d_type_moderne;
}
double Robot::x() const
{
    return d_x;
}
double Robot::y() const
{
    return d_y;
}
