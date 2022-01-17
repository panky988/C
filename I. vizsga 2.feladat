#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	int c;
	for(c=1000;c<=100000;c++)
	{
		int szam=c;
		
		if (szam>=1000 && szam<=9999)
		{
		int szam1 = szam/1000%10;
		int szam2 = szam/100%10;
		int szamok;
		
		szamok = (szam1*10)+szam2;
		szamok = szamok/2;
		
		int db=0;
		for(i=1;i<=szamok;i++)
		{
		if((szamok%i)==0) db++;
		}
	
		if (db==2) printf("%d\n", c);
		db=0;
		}
		
		
		if (szam>=10000 && szam<=99999)
		{
		int szam1 = szam/10000%10;
		int szam2 = szam/1000%10;
		int szamok;
		
		szamok = (szam1*10)+szam2;
		szamok = szamok/2;
		
		int db=0;
		for(i=1;i<=szamok;i++)
		{
		if((szamok%i)==0) db++;
		}
	
		if (db==2) printf("%d\n", c);
		db=0;
		}
		
		if (szam==100000)
		{
		int szam1 = szam/100000%10;
		int szam2 = szam/10000%10;
		int szamok;
		
		szamok = (szam1*10)+szam2;
		szamok = szamok/2;
		
		int db=0;
		for(i=1;i<=szamok;i++)
		{
		if((szamok%i)==0) db++;
		}
	
		if (db==2) printf("%d\n", c);
		db=0;
		}
	}
	return 0;
}
