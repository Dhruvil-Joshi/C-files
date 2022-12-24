//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 int base,power,i,amount;
 clrscr();
 printf("Enter the value of base number: ");
 scanf("%d",&base);
 amount=base;
 printf("Enter the value of power: ");
 scanf("%d",&power);
 i=1;
 while(i<power)
 {
	amount*=base;
	i++;
 }
 printf("Output of given numbers is: %d",amount);
 printf("\n\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}


