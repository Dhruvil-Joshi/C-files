//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float a,b,c,discriminant;
 float root1,root2,imaginary;
 clrscr();
 printf("Enter the values of the coefficient a: ",a);
 scanf("%f",&a);
 printf("Enter the values of the coefficient b: ",b);
 scanf("%f",&b);
 printf("Enter the values of the coefficient c: ",c);
 scanf("%f",&c);
 discriminant=(b*b)-(4*a*c);
  switch(discriminant>0)
  {
   case 1:
	root1=(-b+sqrt(discriminant))/(2*a);
	root2=(-b-sqrt(discriminant))/(2*a);
	printf("The roots of given equation are : %.2f and %.2f ",root1,root2);
	break;
   case 0:
	switch (discriminant<0)
	{
	  case 1:
		root1=root2=-b/(2*a);
		imaginary=sqrt(-discriminant)/(2*a);
		printf("The root of given equation is : %.2f and imaginary root is i%.2f ",root1,imaginary);
		break;
	  case 0:
		root1=root2=-b/(2*a);
		printf("The roots of given equation are : %.2f and %.2f ",root1,root2);
		break;
	}
  }
 printf("\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar.\n");
 getch();
 return 0;
}
