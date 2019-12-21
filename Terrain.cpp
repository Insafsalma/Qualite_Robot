#include "Terrain.h"
#include<vector>
#include "Case.h"

Terrain::Terrain()
{
    for(int i=1; i<6;++i)
    {
        for(int j=1; j<6;++j)
        {
            Case c{i,j};
            d_matrice.push_back(c);
        }
    }
}
Terrain::Terrain(int nbrcol, int nbrlignes): d_nbr_col{nbrcol},d_nbr_lignes{nbrlignes}
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

Terrain::~Terrain()
{ }
