//Készíts függvényt, ami megduplázza egy paraméteréül kapott vektor hosszát azzal, hogy megváltoztatja az x1, y1 koordinátáit! (x0,y0, x1, y1)!

#include <stdio.h>

int main()
{
    printf("\n  Függvények / Dupla vektor\n");
    printf("  -------------------------\n");
    //vektor = x0,y0,x1,y1
    int vektor[] = {5,4,9,15};
    int i=0;
    printf("  A vektor hossza: ");
    for(i=0; i<4; i++)
    {
        printf("%d ", vektor[i]);
    }
    printf("\n");
    duplavektor(vektor);
    return 0;
}
void duplavektor(int vektor[])
{
    int i = 0;
    vektor[2]=vektor[2]*2;
    vektor[3]=vektor[3]*2;
    printf("  Az új vektor hossza: ");
    for(i=0; i<4; i++)
    {
        printf("%d ", vektor[i]);
    }
    printf("\n\n");
}
