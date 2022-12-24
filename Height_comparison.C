//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 float height;
 printf("Enter your height in cm : ",height);
 scanf("%f",&height);
 if(height<150)
  {
   printf("The person is Dwarf");
  }
else if(height>=150&&height<165)
  {
   printf("The person is of Average Height");
  }
else if(height>=165&&height<=195)
  {
  printf("The person is Tall");
  }
else
  {
  printf("The person is of Abnormal Height");
  }
 printf("\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar.\n\n");
 getch();
 return 0;
}
