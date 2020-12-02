//Készíts függvényt, ami visszaadja, hogy a paraméteréül kapott szám prímszám-e!

#include <stdio.h>

int main()
{
    printf("\n  Beadandó feladatok / Függvények / 3.feladat\n");
    printf("  -------------------------------------------\n");
    int szam;
    int darab=0;
    printf("  Kérem a számot: ");
    scanf("%d", &szam);
    primszam(szam, darab);
    return 0;
}
int primszam(int szam, int darab)
{
    int i = 0;
    for(i=1; i<=szam; i++)
    {
        if((szam % i) == 0)
        {
            darab++;
        }
    }
    if(darab == 2)
        {
            printf("  A(z) %d primszám.\n\n",szam);
        }
    else
        {
            printf("  A(z) %d nem primszám.\n\n",szam);
        }        
}
