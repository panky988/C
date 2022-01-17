#include<stdio.h>
typedef char color;
typedef struct tabla
{
	color szin[5];
	int tomeg;
} tabla;
int main()
{
	tabla tabla1;
	tabla tabla2;
	
	strcpy(tabla1.szin, "Piros");
	tabla1.tomeg=5;
	
	strcpy(tabla2.szin, "Kék");
	tabla2.tomeg=10;
	
	if(strlen(tabla1.szin)< strlen(tabla2.szin))
	{
		printf("%d",tabla2.tomeg);
	}
	else
	{
		printf("%d",tabla1.tomeg);
	}
}
