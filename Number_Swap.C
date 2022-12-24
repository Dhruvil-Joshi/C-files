//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  clrscr();
  printf("Enter the value of Number 1 : ",a);
  scanf("%d",&a);
  printf("Enter the value of Number 2 : ",b);
  scanf("%d",&b);
  printf("Sr No.\t Instruction \t\t Number 1 \t Number 2 \n");
  printf("  1.\t Before Swapping\t %d     \t %d \n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("  2.\t After Swapping \t %d      \t %d \n",a,b);
  printf("\n");
  printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar.");
  getch();
  return 0 ;
}

