//Egy tömb 10 hallgató jegyeit tartalmazza. Készíts programot, ami kiírja, volt-e bukás a csoportban! A leggyorsabb megoldásra törekedj!

#include <stdio.h>

int main(void)
{
    printf("\n  Tömbök / Jegyek és bukás\n");
    printf("  ------------------------\n");
    int array[10];
    int i = 0;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        array[i] = rand()%5+1;
    }
    int min = array[0];
    printf("  Jegyek: ");
    for(i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    for(i=0;i<10;i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    if(min==1)
    {
        printf("  Volt bukás!\n\n");
    }
    else
    {
        printf("  Nem volt bukás!\n\n");
    }
    return 0;
}
