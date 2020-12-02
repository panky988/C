//Ha már létezik a "fajlba_iras.c" program által létrehozott fájl, olvastassuk vissza egy új programban a korábbi eredményeket!

#include <stdio.h>

int main()
{
    printf("\n  Beadandó feladatok / Fájlbeolvasás / 3.feladat\n");
    printf("  -------------------------------------------\n");
    
    FILE *fp;
    fp = fopen("nevek.txt", "r");
    char string[100];
    int kor;
    int i = 1;
    while(fgets(string,100,fp)!= NULL)
    {
        printf("  %d. %s\n\n", i, string);
        i++;
    }
    fclose(fp);
    return 0;
}
