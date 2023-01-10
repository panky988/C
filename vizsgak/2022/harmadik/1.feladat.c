#include <stdio.h>

int main ()
{
    int i,j, num, sum = 0;
    int osztdb=0;
 
    for(i=100; i<1000; i++)
    {
        num=i;
        while(num!=0)
        {
            sum += num % 10;
            num = num / 10;
        }
        sum=0;
        for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				osztdb++;
			}
		}
		if(osztdb=2)
		{
		    printf("%d ", num);
		}
    }
    return 0;

}
