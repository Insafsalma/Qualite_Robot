#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
    public:
        Robot();
        virtual ~Robot();
        Robot( double x,double y, double direction);
        virtual void avance(double distance)=0;
        virtual void tourneAgauche(double angle)=0;
        virtual void tourneAdroite( double angle)=0;

    private:
        point d_position;
        double d_direction;

};

#endif // ROBOT_H
