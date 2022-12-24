//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 int number[24],i,positive,negative,even,odd;
 clrscr();
 for(i=0;i<=24;i++)
 {
	printf("Enter the number %d : ",i+1);
	scanf("%d",&number[i]);
 }
 i=0;
 positive=0,negative=0,even=0,odd=0;
 for(i=0;i<=24;i++)
 {
	if(number[i]>=0)
	{
		positive++;
	}
	if(number[i]<0)
	{
		negative++;
	}
	if((number[i]%2)==0)
	{
		even++;
	}
	if((number[i]%2!=0))
	{
		odd++;
	}
 }
 printf("Total Positive Numbers : %d\n",positive);
 printf("Total Negative Numbers : %d\n",negative);
 printf("Total Even Numbers : %d\n",even);
 printf("Total Odd Numbers : %d\n",odd);
 printf("\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}