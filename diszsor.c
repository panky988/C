//Készíts függvényt dísszor néven, ami csillagokat ír ki egymás mellé, a paraméterében kapott számban! Készíts még egy díszsor függvényt, ami ugyanezt tetszőleges karakterrel tudja!

#include <stdio.h>

int main()
{
    printf("\n  Beadandó feladatok / Függvények / 2.feladat\n");
    printf("  -------------------------------------------\n");
    int szam;
    char chr;
    printf("  Kérem a számot: ");
    scanf("%d", &szam);
    printf("  Kérem a karaktert: ");
    scanf(" %c", &chr);
    disszor(szam);
    diszsor(szam, chr);
    printf("\n\n");
    return 0;
}
void disszor(int szam)
{
    int i=0;
    printf("  ");
    for(i=0;i<szam;i++)
    {
        printf("* ");
    }
    printf("\n");
    return;
}
void diszsor(int szam, char chr)
{
    int i=0;
    printf("  ");
    for(i=0;i<szam;i++)
    {
        printf("%c ",chr);
    }
    return;
}
