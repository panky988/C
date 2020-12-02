//Kérd be három gerelyhajító legjobb eredményét (méterben) és hirdess győztest!

#include <stdio.h>

int main()
{
    printf("\n  Beadandó feladatok / Szelekció / 2.feladat\n");
    printf("  -------------------------------------------\n");
    int i;
    float eredmenyek[3];
    int helyezes=1;
    float max;
    for(i=1;i<4;i++)
    {
        printf("  Kérem a(z) %d. versenyzőt: ", i);
        scanf("%f", &eredmenyek[i]);
    }
    if(eredmenyek[1]==eredmenyek[2] || eredmenyek[1]==eredmenyek[3] || eredmenyek[2]==eredmenyek[3])
    {
        printf("  Döntetlen!");
    }
    else
    {
        max=eredmenyek[1];
        for(i=1;i<4;i++)
        {
            if(eredmenyek[i]>max)
            {
                max=eredmenyek[i];
                helyezes=i;
            }
        }
        printf("  A győztes a %d. versenyző, %.2fm-rel\n\n", helyezes, max);
    }
    return 0;
}
