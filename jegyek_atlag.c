/*
a.) Írasd ki, hogy jeles volt-e az osztály (minden jegy ötös), vagy nem!
b.) Írasd ki, hogy hány jeles volt az osztályban!
*/
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
    
    printf("\n  Tömbök / Jegyek és jeles\n");
    printf("  ------------------\n");
    int max = array[0];
    for(i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    if(max==5)
    {
        printf("  a. Volt jeles!\n");
        
    }
    else
    {
        printf("  a. Nem volt jeles!\n");
    }
    int jeles = 0;
    for(i=0;i<10;i++)
    {
        if(array[i]==5)
        {
            jeles++;
        }
    }
    printf("  b. %d db jeles volt az osztályban!\n\n",jeles);
    
    printf("\n  Tömbök / Jegyek és átlag\n");
    printf("  ------------------------\n");
    float atlag= 0;
    for(i=0;i<10;i++)
    {
        atlag += array[i];
    }
    atlag = atlag/10;
    printf("  %.2f az osztály átlag!\n\n", atlag);
    return 0;
}
