#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int i,x=0;
	for(i=2; i<=a && x==0; i++)
	{
		if(a%i==0 && b%i==0)
		{
			x=i;
		}
	}
	printf("%d ",x);
	return 0;
}
