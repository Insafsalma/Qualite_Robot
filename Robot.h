#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
    public:
        Robot();
        ~Robot();
        Robot( double x,double y, double direction);
        double x() const;
        double y() const;
        bool statutRobot() const ;
    private:
        double d_x;
        double d_y;
        double d_direction;
        bool d_type_moderne;
};

#endif // ROBOT_H
