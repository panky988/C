#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f = fopen("int.txt","r");
	FILE *g = fopen("out.txt","w");
 
	while(!feof(f))
	{
		char c=0;
		fscanf(f,"%c", &c);
		if(c%2==1)
		{
			fprintf(g, "%c", c);
		}
	}
	fclose(f);
	fclose(g);
	return 0;
}
