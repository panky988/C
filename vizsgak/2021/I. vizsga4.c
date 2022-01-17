#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("TÖMB[a][b]\n");
	printf("a= ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	printf("a = %d, b = %d \n", a,b);
	float tomb[a][b];
	float max = -99999;
	float max2 = -999;
	for(int i = 0; i<a; i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("Kérem adja meg az %d sor %d oszlop elemét: ", i,j);
			scanf("%f",&tomb[i][j]);
			if(tomb[i][j]>max)
			{
				max2=max;
				max=tomb[i][j];
			}
			else {
			if(tomb[i][j]>max2)
			{
				max2=tomb[i][j];
			}
			}
		}
	}
	printf("max: %f", max);
	printf("max2: %f", max2);
	return 0;
}
