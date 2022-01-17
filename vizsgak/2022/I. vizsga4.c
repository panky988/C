#include <stdio.h>
#include <stdlib.h>

int fuggveny(int n)
{
	if(n==1)
	{
		return 2;
	}
	else if(n==2)
	{
		return 5;
	}
	else
	{
		return(fuggveny(n-1)-fuggveny(n-2))*(fuggveny(n-1)-fuggveny(n-2));
	}
}
int main()
{
	printf("%d", fuggveny(1));
	return 0;
}
