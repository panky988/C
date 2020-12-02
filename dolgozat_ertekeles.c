//Készíts programot, ami egy dolgozat pontszámából kiszámítja a százalékos eredményt, majd kiírja a jegyet! Egy dolgozatra legfeljebb 20 pont adható, az eredmények: 60% - 2, 70% - 3, 80% - 4, 90% - 5

#include <stdio.h>

int main()
{
    float maximum = 20;
    float eredmeny = 0;
    float szazalek = 0;
    printf("\n  Beadandó feladatok / Szelekció / 3.feladat\n");
    printf("  -------------------------------------------\n");
    printf("  Kérem a pontszámot (X/20): ");
    scanf("%f", &eredmeny);
    
    if(eredmeny < 0 || eredmeny > 20)
    {
        printf("  !!Ilyen eredmény nem létezik!!\n\n");
        return 0;
    }
    
    printf("    Az eredmény: %d/20 \n", (int)eredmeny);
    szazalek = (eredmeny / 20)*100;
    printf("    %0.1f%c-os a dolgozat!\n",szazalek,37);

    switch((int)szazalek)
    {
        case 60 ... 69:
            printf("      A dolgozat 2-es!\n");
        break;
        case 70 ... 79:
            printf("      A dolgozat 3-as!\n");
        break;
        case 80 ... 89:
            printf("      A dolgozat 4-es!\n");
        break;
        case 90 ... 100:
            printf("      A dolgozat 5-ös!\n");
        break;
        default:
            printf("      A dolgozat 1-es!\n");
    }
    return 0;
}
