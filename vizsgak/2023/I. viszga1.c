#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int last;
    int first;
    int szorzo;
    for(i=0; i<=10000; i++)
    {
        last=i%10;
        szorzo=i*i;
        if(szorzo<99)
        {
            first=szorzo/10;
        }
        else if(szorzo<999)
        {
            first=szorzo/100;
        }
        else if(szorzo<9999)
        {
            first=szorzo/1000;
        }
        else if(szorzo<99999)
        {
            first=szorzo/10000;
        }
        else if(szorzo<999999)
        {
            first=szorzo/100000;
        }
        else if(szorzo<9999999)
        {
            first=szorzo/1000000;
        }
        else if(szorzo<99999999)
        {
            first=szorzo/10000000;
        }
        else if(szorzo<999999999)
        {
            first=szorzo/100000000;
        }

        if(first==last)
        {
            printf("%d %d %d %d \n", first, i, szorzo, last);
        }
    }
    return 0;
}
