#ifndef ROBOT_H
#define ROBOT_H
#include "Case.h"
#include "deplacement.h"
class Robot
{
    public:
        Robot();
        ~Robot();
        Robot(Case& position, bool moderne);
        Case& position() const;
        bool statutRobot() const ;
        void sedeplace(deplacement& deplacement);
    private:
        Case& d_position;
        bool d_type_moderne;
};

#endif // ROBOT_H
