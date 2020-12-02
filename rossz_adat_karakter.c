//2.Folytatás: olvassunk be egy karaktert is, majd írassuk ki annyiszor, mint a beolvasott szám!

#include <stdio.h>

void szam_bekeres()
{
    printf("\n  Beadandó feladatok / Ciklusvezető utasítások / 2.feladat\n");
    printf("  --------------------------------------------------------\n");
    float szam;
    printf("  Kérem a számot: ");
    scanf("%f",&szam);
    while(szam<0)
    {
        return szam_bekeres();
    }
    
    printf("\n  Beadandó feladatok / Ciklusvezető utasítások / 3.feladat\n");
    printf("  --------------------------------------------------------\n");
    char chr;
    printf("  Kérem a karaktert: ");
    scanf(" %c", &chr);
    printf("  ");
    for(int i=0;i<szam;i++)
    {
        printf("%c ", chr);
    }
    printf("\n\n");
}


int main(void)
{
    szam_bekeres();
    return 0;
}
