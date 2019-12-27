#include "Case.h"

Case:: Case(double x, double y):d_x{x},d_y{y}
{}
Case::~Case()
{ }

double Case:: x() const
{
    return d_x;
}
double Case:: y() const
{
    return d_y;
}
void Case:: modifier( double x ,double y)
{
    d_x=x;
    d_y=y;
}
bool Case :: operator==(const Case&C)const
{
    return (d_x==C.d_x)&&(d_y==C.d_y) ;
}
