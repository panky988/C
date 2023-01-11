#include <stdio.h>
#include <stdlib.h>

typedef struct telefon
{
    int gombok_szama;
    float tomeg;
}telefon;

int main()
{
    int x1, x2;
    float y1, y2;

    telefon telo1;
    telefon telo2;

    printf("Kerem a telo1 gombok szamat: ");
    scanf("%d", &x1);
    telo1.gombok_szama=x1;

    printf("Kerem a telo1 tomeget: ");
    scanf("%f", &y1);
    telo1.tomeg=y1;

    printf("Kerem a telo2 gombok szamat: ");
    scanf("%d", &x2);
    telo2.gombok_szama=x2;
    printf("Kerem a telo2 tomeget: ");
    scanf("%f", &y2);
    telo2.tomeg=y2;

    if(telo1.gombok_szama<telo2.gombok_szama)
    {
        printf("%f",telo1.tomeg);
    }
    else
    {
        printf("%f",telo2.tomeg);
    }

    return 0;
}
