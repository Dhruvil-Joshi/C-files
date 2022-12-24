//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
void prime(int num)
{

    int result,i,n=0;
    if(num==1)
    {
        printf("The entered number us neither composite nor prime");
        return;
    }
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            n=1;
        }
    }
    if(n==1)
    {
        printf("The entered number is composite");
    }
    else
    {
        printf("The entered number is prime");
    }
}
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    prime(number);
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar");
    return 0;
}
