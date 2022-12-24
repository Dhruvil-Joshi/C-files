//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
int main()
{
    long int Amt, i, sr_no;
    sr_no = 1;
//    clrscr();
    printf("Enter the Big Bazaar customer ID no : BB");
    scanf("%ld",&Amt);
    for(i=0; Amt>0; i=i+Amt)
    {
	printf("Enter Amount of item %ld: ",sr_no);
	scanf("%ld",&Amt);
	sr_no++;
    }
    printf("\n");
    printf("Grand Total of the customer is : %ld",i);
    printf("\n\n");
    printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar");
  //  getch();
    return 0;
}
