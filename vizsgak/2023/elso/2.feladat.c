#include <stdio.h>
#include <stdlib.h>

#define ROWS 14
#define COLS 14

void fill_random(int array[ROWS][COLS], int max);

int main(){
    srand(time(NULL));
    int A[ROWS][COLS];
    fill_random(A,5);
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("--------------------DARABSZAM-----------------------\n");
    printf("\n");
    int szorzat=1;
    for(int i=0;i<COLS;i++)
    {
        szorzat=szorzat*A[0][i];
    }
    int darab;
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            if(A[i][j]<szorzat)
            {
                darab++;
            }
        }
    }
    printf("Darabszam: %d\n",darab);
    return 0;
}

void fill_random(int array[ROWS][COLS], int max)
{
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            array[i][j]=(rand()%max)+1;
        }
    }
}
