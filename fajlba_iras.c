//Készíts programot, ami a felhasználó nevét és életkorát kiírja egy fájlba!

#include <stdio.h>

int main()
{
    printf("\n  Beadandó feladatok / Fájlbeolvasás / 2.feladat\n");
    printf("  -------------------------------------------\n");
    FILE *fp;
    fp = fopen("nevek.txt", "w");
    char nev[100], string[100];
    int kor;
    printf("  Kérem a felhasználó nevét: ");
    gets(nev);
    printf("  Kérem a felhasználó életkorát: ");
    scanf("%d", &kor);
    fprintf(fp, "%s %d éves\n", nev, kor);
    fclose(fp);
    
    return 0;
}
