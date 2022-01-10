//2.feladat
#include <stdio.h>

int main()
{
    char tomb[10][10];
    for(int i=0; i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            printf("Kérem adja meg a %d. sor %d. oszlop értékét: \n",i,j);
            scanf(" %c",&tomb[i][j]);
        }
    }
    
    int kovet=0;
    for(int i=0; i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            //printf("%c %c",tomb[i][j]++, tomb[i+1][j+1]);
            if (tomb[i][j]+1 == tomb[i][j+1]) {kovet++;}
        }
    }    
    printf("%d", kovet);
    return 0;
}
