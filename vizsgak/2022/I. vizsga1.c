#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for(i=2;i<=1000000;i++)
	{
		int osztdb=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				osztdb++;
			}
		}
		int elso;
		int utolso=i%10;

		int a=i;
		while(a>0)
		{
			elso=a;
			a/=10;
		}
		if(osztdb==2 && elso==utolso)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}
