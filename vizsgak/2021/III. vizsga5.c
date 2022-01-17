//5.feladat

#include <stdio.h>

typedef struct fej
{
	int szemek_szama;
	float hajhossz;
} fej;

int main()
{
    
    float maxhaj=-99999;
    fej f[100];
    for(int i=0; i<100; i++)
    {
        printf("Kérem a(z) %d. szemek számát: ",i);
        scanf("%d", &f[i].szemek_szama);
        printf("Kérem a(z) %d. hajhosszt: ",i);
        scanf("%f", &f[i].hajhossz);
        
        if (f[i].hajhossz>maxhaj)
        {
            maxhaj=f[i].hajhossz;
        }
    }
    
    int szemossz=0;
    for(int i=0; i<100; i++)
    {
        if (f[i].hajhossz == maxhaj)
        {
            szemossz = szemossz+f[i].szemek_szama;
        }
    }
    
    printf("A leghosszabb hajúak szemeinek összege: %d", szemossz);
    
    return 0;
}
