//előre definiált tömb feltöltése random számokkal
#include <stdio.h>
#include <stdlib.h>

#define ROWS 14
#define COLS 14

void fill_random(int array[ROWS][COLS], int max);

int main(){
    srand(time(NULL));
    int A[ROWS][COLS];
    fill_random(A,10);
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
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
