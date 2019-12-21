#ifndef CASE_H
#define CASE_H


class Case
{
    public:
        Case(double x, double y);
        virtual ~Case();
        double x() const;
        double y() const;
    private:
        double d_x;
        double d_y;
};

#endif // CASE_H
