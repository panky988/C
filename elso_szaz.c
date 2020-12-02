//Írassuk ki az első 100 pozitív egész számot, majd írassuk ki azok összegét!

int main()
{
    printf("\n  Ciklusvezető utasítások / Első 100\n");
    printf("  ----------------------------------\n");
    int i = 0;
    int osszeg = 0;
    printf("  ");
    while(i<=100)
    {
        printf("%d ",i);
        osszeg+=i;
        i++;
    }
    printf("\n");
    printf("  Az első 100 przitív szám összege: %d\n\n",osszeg);
    return 0;
}
