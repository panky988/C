//Hozz létre egy egész típusú változót, adj neki kezdőértéket! Egy típusos mutatóval duplázd meg az értékét!

#include <stdio.h>

int main()
{
    int szam = 5;
    int * p = szam*2;
    printf("\n  Függvények / Pointer duplázás\n");
    printf("  -----------------------------\n");
    printf("  A bekért szám: %d.\n  A duplája: %d.\n\n",szam,p);
    return 0;
}
