#include "debris.h"
#include "Case.h"

debris::debris(Case &position):d_position{position}
{ }

debris::~debris()
{ }

Case& debris:: position_debris() const
{
    return d_position;
}
