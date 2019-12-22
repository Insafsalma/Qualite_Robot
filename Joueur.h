#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
      public:
        Joueur(int id_joeur, double score, string type_joueur, case& position, int dureDeVie);
        int JoueureurId();
        double joueurScore();
        double Set_joueurScore(double Jscore);
        string joueurType();
        int joueurDureDeVie();


    private:
        int d_id_joueur;
        double d_score;
        string d_type_joueur;
        int d_dureDeVie;
};

#endif // JOUEUR_H
