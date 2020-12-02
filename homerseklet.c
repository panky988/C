//Az elmúlt 30 nap megmértük minden nap a hőmérsékletet. Mely napon volt a legmelegebb és mennyi volt az értéke?

#include <stdio.h>

int main()
{
    float array[30];
    int i = 0;
    srand(time(0));
    printf("\n  Tömbök / Hőmérséklet\n");
    printf("  --------------------\n");
    printf("  Mérések: ");
    for(i=0;i<30;i++)
    {
        array[i] = (float)((rand()%400)/10)-15;
        printf("%.1f, ",array[i]);
    }
    printf("\n\n");
    int max=array[0];
    for(i=0;i<30;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("  %.1f°C a legmelegebb mérés.\n\n", (float)max);
    return 0;
}
