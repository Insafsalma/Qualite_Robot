#ifndef ROBOT_H
#define ROBOT_H
#include "Case.h"
#include "deplacement.h"
class Robot:public Pion
{
    public:
        Robot(Case& position, bool moderne);


};

#endif // ROBOT_H
