#include "Terrain.h"
#include<vector>
#include "Case.h"

void Terrain:: remplir_terrain()
{
    d_matrice.clear();
    for(int i=1; i<=d_nbr_lignes ;++i)
    {
        for(int j=1; j<=d_nbr_col;++j)
        {
            Case c{i,j};
            d_matrice.push_back(c);
        }
    }
}
Terrain::Terrain():d_nbr_col{5},d_nbr_lignes{5}
{
    remplir_terrain();
}
Terrain::Terrain(int nbrcol, int nbrlignes): d_nbr_col{nbrcol},d_nbr_lignes{nbrlignes}
{
    remplir_terrain();
}

Terrain::~Terrain()
{ }
void Terrain::modifier(int col, int lign)
{
    d_nbr_col=col;
    d_nbr_lignes=lign;
    remplir_terrain();
}
std::vector<Case> Terrain:: Cases() const
{
    return d_matrice;
}
int Terrain::taille_terrain() const
{
    return d_nbr_col * d_nbr_lignes;
}
int Terrain::nombre_colonne() const
{
    return d_nbr_col;
}
int Terrain::nombre_lignes() const
{
    return d_nbr_lignes;
}
