//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<math.h>
void divide(int num)
{
    int i,division[8];
    for(i=0;i<8;i++)
    {
        division[i]=num%2;
        num=num/2;
    }
    for(i=7;i>=0;i--)
    {
        printf("%d",division[i]);
    }
}
int main()
{
    int num,value;
    printf("Enter the value : ");
    scanf("%d",&num);
    divide(num);
    printf("\n\n This program is made by 22CE044 Joshi Dhruvil Sandipkumar");
    return 0;
}
