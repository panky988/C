//Készíts programot kamatszámításhoz, ciklussal! Kérd be a tőke mennyiségét, a kamat éves értékét (%), illetve a befektetés idejét hónapokban! Írd ki hónapról hónapra, hogyan gyarapodik a befektetés!

#include <stdio.h>

int main()
{
    int i=0;
    float toke,ido;
    float kamat;
    printf("Kérem a tőke mennyiségét: ");
    scanf(" %f",&toke);
    printf("Kérem a kamat éves értékét: ");
    scanf(" %f",&kamat);
    printf("Kérem a befektetés idejét : ");
    scanf(" %f",&ido);
    
    float havi = (toke*(kamat/100)/12);

    for(i=0; i<ido; i++)
    {

        toke=toke+havi;


        printf("Hónap: %d, pénz: %.0f \n",i+1, toke);

    }
    return 0;
}
