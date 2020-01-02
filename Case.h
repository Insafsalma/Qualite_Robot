#ifndef CASE_H
#define CASE_H
#include <string>

class Case
{
    public:
        Case(double x, double y);
        virtual ~Case();
        double x() const;
        double y() const;
        void modifier(double x, double y);
        bool operator==(const Case&C)const;
    private:
        double d_x;
        double d_y;
};

#endif // CASE_H
