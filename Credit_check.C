//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 int stock,order;
 char credit;
 clrscr();
 printf("Please enter your credit in y or n form : ");
 scanf("%c",&credit);
 printf("The stock available is : ");
 scanf("%d",&stock);
 printf("Enter the value of your order: ");
 scanf("%d",&order);
 if(credit=='Y' || credit=='y')
 {
	if(order<=stock)
	{
		printf("The supply is available.\n\n");
	}
	else
	{
		printf("The order exceeds the supply limit. Your balance will be refunded.\n\n");
	}
 }
 else if(credit=='N'||credit=='n')
 {
	printf("Not enough credit.\n\n");
 }
 else
 {
	printf("Enter only y or n type character.\n\n");
 }
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkmumar.\n");
 getch();
 return 0;
}
