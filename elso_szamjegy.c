//egy intervallum első számjegyeinek kiiratása
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int first;
    for(i=0; i<=10000; i++)
    {
        last=i%10;
        if(i<99)
        {
            first=i/10;
        }
        else if(i<999)
        {
            first=i/100;
        }
        else if(i<9999)
        {
            first=i/1000;
        }
        else if(i<99999)
        {
            first=i/10000;
        }
            printf("%d %d \n", first, i);
    }
    return 0;
}
