//egy intervallum utolsó számjegyeinek kiiratása
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int last;
    for(i=0; i<=10000; i++)
    {
        last=i%10;
        printf("%d %d \n", i, last);
    }
    return 0;
}

VAGY

//egy egyedi szám utolsó számjegyének kiiratása
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int last;
    printf("Irj egy szamot: ");
    scanf("%d", &i);
    last=i%10;
    printf("%d", last);
    return 0;
}
