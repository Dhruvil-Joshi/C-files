//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 long int Basic_Salary;
 float Allowances,Deduction,DA,HRA,MA,TA,PF,IT,Gross_Salary,Net_Salary;
 clrscr();
 printf("Enter your Basic Salary : ",Basic_Salary);
 scanf("%ld",&Basic_Salary);
 printf("Allowances:\n");
 DA=Basic_Salary*70/100;
 HRA=Basic_Salary*7/100;
 MA=Basic_Salary*2/100;
 TA=Basic_Salary*4/100;
 PF=Basic_Salary*12/100;
 IT=500;
 Allowances=DA+HRA+MA+TA;
 Deduction=PF+IT;
 Gross_Salary=Basic_Salary+Allowances;
 Net_Salary=Gross_Salary-Deduction;
 printf("DA of Basic Salary = %.2f Rs.\n",DA);
 printf("HRA of Basic Salary = %.2f Rs.\n",HRA);
 printf("MA of Basic Salary = %.2f Rs.\n",MA);
 printf("TA of Basic Salary = %.2f Rs.\n",TA);
 printf("PF of Basic Salary = %.2f Rs.\n",PF);
 printf("IT of Basic Salary = 500 Rs.\n");
 printf("Gross Salary = %.2f Rs.\n",Gross_Salary);
 printf("Net Salary = %.2f Rs.\n",Net_Salary);
 printf("\n\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}