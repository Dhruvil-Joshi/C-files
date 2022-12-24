//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
int prime(int num)
{
    int i,n=0;
    if(num==1)
    {
        return 5;
    }
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            n=1;
        }
    }
    return n;
}
int main()
{
    int number,result;
    printf("Enter the number : ");
    scanf("%d",&number);
    result=prime(number);
    if(result==5)
    {
        printf("The entered number us neither composite nor prime");
    }
    if(result==1)
    {
        printf("The entered number is composite");
    }
    else
    {
        printf("The entered number is prime");
    }
printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar");
return 0;
}
