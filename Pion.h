#ifndef PION_H
#define PION_H


class Pion
{

    public:
        Pion();
        Pion(Case& position, bool normal);
        virtual ~Pion();
        virtual bool TypePion();
        virtual Case& position() const;
        virtual void sedeplace(deplacement& deplacement,char act,std::ostream& ost);

    private:
        bool d_normal;
        Case& d_position;
};

#endif // PION_H
