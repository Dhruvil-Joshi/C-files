//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 long int amount;
 long int hundred;
 long int fifties, tens;
 clrscr();
 printf("Enter the value of amount : ");
 scanf("%ld",&amount);
 hundred=amount/100;
 printf("Requirement of 100 Rs. note is %ld\n",hundred);
 fifties=(amount%100)/50;
 printf("Requirement of 50 Rs. note is %ld\n",fifties);
 tens=(amount%50)/10;
 printf("Requirement of 10 Rs. note is %ld\n",tens);
 printf("\n\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar");
 getch();
 return 0;
}