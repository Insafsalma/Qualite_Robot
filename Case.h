#ifndef CASE_H
#define CASE_H


class Case
{
    public:
        Case(double x, double y);
        virtual ~Case();
        double x() const;
        double y() const;
        void modifier(double x, double y);
    private:
        double d_x;
        double d_y;
};

#endif // CASE_H
