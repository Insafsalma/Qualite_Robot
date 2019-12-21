#ifndef DEBRIS_H
#define DEBRIS_H
#include "Case.h"

class debris
{
    public:
        ~debris();
        debris(Case &position);
        Case& position_debris() const;
    private:
        Case& d_position;
};

#endif // DEBRIS_H
