//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
#define columnmax 7
#define rowmax 10
int main()
{
 int row=1,column;
 clrscr();
 printf("\t\tMULTIPLICATION TABLE (1 to 7)\n");
 printf("------------------------------------------------------------\n");
 do
 {
  column=1;
  do
  {
   printf("%d\t",row*column);
   column++;
  }while(column<=columnmax);
  printf("\n");
  row++;
 }while(row<=rowmax);
 printf("------------------------------------------------------------");
 printf("\n\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}
