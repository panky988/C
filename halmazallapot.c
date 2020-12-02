//Kérd be a víz hőfokát, állapítsd meg belőle a halmazállapotát!

#include <stdio.h>

int main()
{
    printf("\n  Szelekció / Halmazállapot\n");
    printf("  -------------------------\n");
    int hofok;
    printf("  Kérem a víz hőfokát: ");
    scanf("%d", &hofok);
    if(hofok<=0)
    {
        printf("  Jég\n\n");
    }
    else if(hofok>=100)
    {
        printf("  Gőz\n\n");
    }
    else
    {
        printf("  Víz\n\n");
    }
    return 0;
}
