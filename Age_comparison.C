//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 int Ram,Shyam,Ajay;
 clrscr();
 printf("Enter Ram's Age : ",Ram);
 scanf("%d",&Ram);
 printf("Enter Shyam's Age : ",Shyam);
 scanf("%d",&Shyam);
 printf("Enter Ajay's Age : ",Ajay);
 scanf("%d",&Ajay);
if(Ram==Shyam&&Ram==Ajay&&Shyam==Ajay)
   {
	printf("All are of equal age");
   }
else
{
	if(Ram==Shyam&&Ram!=Ajay&&Shyam!=Ajay)
	{
	printf("Ram and Shyam are equal");
	}
	else if(Shyam==Ajay&&Ram!=Ajay&&Shyam!=Ram)
	{
	printf("Shyam and Ajay are equal");
	}
	else if(Ram==Ajay&&Ram!=Shyam&&Ajay!=Shyam)
	{
	printf("Ram and Ajay are equal");
	}
	else if(Ram<Shyam&&Ram<Ajay)
	{
	printf("Ram is youngest");
	}
	else if(Shyam<Ram&&Shyam<Ajay)
	{
	printf("Shyam is youngest");
	}
	else if(Ajay<Ram&&Ajay<Shyam)
	{
	printf("Ajay is youngest");
	}
	else if(Ram==Shyam!=Ajay)
	{
	printf("Ram and Shyam are equal");
	}
	else if(Ram!=Shyam==Ajay)
	{
	printf("Shyam and Ajay are equal");
	}
	else if(Ram==Ajay!=Shyam)
	{
	printf("Ram and Ajay are equal");
	}
}
 printf("\n\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar\n");
 getch();
 return 0;
}