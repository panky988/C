//Kérjünk be egy pozitív számot! Rossz adat esetében ismételjük meg a beolvasást!

#include <stdio.h>

void szam_bekeres()
{
    printf("\n  Beadandó feladatok / Ciklusvezető utasítások / 2.feladat\n");
    printf("  --------------------------------------------------------\n");
    float szam;
    printf("  Kérem a pozitív számot: ");
    scanf("%f",&szam);
    while(szam<0)
    {
        return szam_bekeres();
    }
}


int main(void)
{
    szam_bekeres();
    return 0;
}
