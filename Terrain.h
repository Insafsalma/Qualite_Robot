#ifndef TERRAIN_H
#define TERRAIN_H
#include<vector>
#include "Case.h"

class Terrain
{
    public:
        Terrain();
        Terrain(int nbr_colonnes, int nbr_lignes);
        virtual ~Terrain();
        int taille_terrain() const;
        std::vector<Case> Cases() const;
        void modifier(int col, int lign);
        void remplir_terrain();
        int nombre_colonne() const;
        int nombre_lignes() const;
    private:
        int d_nbr_col,d_nbr_lignes;
        std::vector<Case> d_matrice;
};

#endif // TERRAIN_H
