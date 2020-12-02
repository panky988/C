//Készíts programot, ami egy háromszög oldalainak hosszát bekérve kiszámítja, hogy szerkeszthető-e a háromszög!

#include <stdio.h>

int main ()
{
    int i;
    float oldalak[3];
    printf("\n  Szelekció / Háromszög oldalai\n");
    printf("  -----------------------------\n");
    for (i = 0; i < 3; i++)
    {
        printf("  Kérem a(z) %d. oldal hosszát (cm): ", i+1);
        scanf ("%f", &oldalak[i]);
    }
    printf ("    A: %.2fcm\n", oldalak[0]);
    printf ("    B: %.2fcm\n", oldalak[1]);
    printf ("    C: %.2fcm\n", oldalak[2]);
      
    if(oldalak[0]+oldalak[1]>oldalak[2] && oldalak[0]+oldalak[2]>oldalak[1] && oldalak[1]+oldalak[2]>oldalak[0])
    {
        printf("  A háromszög szerkeszthető!\n\n");
    }
    else
    {
        printf("  A háromszög nem szerkeszthető\n\n");
    }
    return 0;
}
