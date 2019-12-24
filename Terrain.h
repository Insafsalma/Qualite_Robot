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
        void modifier(int col, int lign);
        void remplir_terrain();
    private:
        int d_nbr_col,d_nbr_lignes;
        std::vector<Case> d_matrice;
};

#endif // TERRAIN_H
