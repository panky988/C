#include <stdio.h>
#include <stdlib.h>

int fuggveny(int x, char *t, int n)
{
	int r=9;
	while(x>0)
	{
		int u=x%10;
		for(int i=0; i<n; i++)
		{
			if(u==t[i]-'0')
			{
				if(u<r)
				{
					r=u;
				}
			}
		}
		x/=10;
	}
	return r;
}
int main()
{
	char a[]={'a','2','2','4','e','r','t'};
	int m=sizeof(a)/sizeof(a[0]);
	printf("%d", fuggveny(1234,a,m));
	return 0;
}
