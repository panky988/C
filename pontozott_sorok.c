//Készíts programot, ami egy létező szöveges fájl tartalmát úgy írja ki a képernyőre, hogy a sorok elé odaírja a sorszámot is!

int main()
{
    printf("\n  Beadandó feladatok / Fájlkezelés / 1.feladat\n");
    printf("  -------------------------------------------\n");
    char string[100];
    FILE *fp;
    fp = fopen("szoveg.txt", "rS");
    if (fp == NULL)
    {
        perror ("  A fájl nem található\n\n");
        return 1;
    }
    int i = 1;
    while(fgets(string,100,fp)!= NULL)
    {
        printf("  %d. %s", i, string);
        i++;
    }
    printf("\n\n");
    fclose (fp);
    return 0;
}
