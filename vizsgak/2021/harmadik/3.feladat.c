#include <stdio.h>

int main()
{
    int i;
    int j;
    printf("Kérem az i értékét: ");
    scanf("%d",&i);
    printf("Kérem az j értékét: ");
    scanf("%d",&j);
    printf("%d",fuggveny(&i, j));
    return 0;
}
int fuggveny(int *a, int b)
{
    int c;
    c=*a;
    c=c*2;
    *a=c;
    
    int hossz=sizeof(b);
    printf("hossz: %d ",hossz-1);
    int darab[hossz];
    
    
    
    for (int i=hossz;b>0;i--)
    {
      darab[i]=b%10;
      b=b/10;
    }
    
    
    

    if (hossz>=3) return darab[2];
    else return -1;
}
