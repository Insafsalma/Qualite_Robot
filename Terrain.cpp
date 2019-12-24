#include "Terrain.h"
#include<vector>
#include "Case.h"

void Terrain::modifier(int col, int lign)
{
    d_nbr_col=col;
    d_nbr_lignes=lign;
    remplir_terrain();
}
void Terrain:: remplir_terrain()
{
    for(int i=1; i<=d_nbr_lignes ;++i)
    {
        for(int j=1; j<=d_nbr_col;++j)
        {
            Case c{i,j};
            d_matrice.push_back(c);
        }
    }
}
Terrain::Terrain():d_nbr_col{6},d_nbr_lignes{6}
{
    remplir_terrain();
}
Terrain::Terrain(int nbrcol, int nbrlignes): d_nbr_col{nbrcol},d_nbr_lignes{nbrlignes}
{
    remplir_terrain();
}

Terrain::~Terrain()
{ }


