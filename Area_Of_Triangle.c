//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<math.h>
float area(float i)
{
    float value;
    value=sqrt(i);
    return value;
}
void semiperimeter(float a,float b,float c)
{
       if((a+b)<=c||(b+c)<=a||(a+c)<=b)
    {
        printf("\nThe given sides do not form triangle.");
        return;
    }
    float s,f,n,result;
    f=a+b+c;
    s=f/2;
    n=s*(s-a)*(s-b)*(s-c);
    result=area(n);
    printf("\nThe area of triangle of sides %.2f cm, %.2f cm and %.2f cm is %.2f",a,b,c,result);
    return;
}
int main()
{
    float side1,side2,side3;
    printf("Enter the length of side a : ");
    scanf("%f",&side1);
    printf("Enter the length of side b : ");
    scanf("%f",&side2);
    printf("Enter the length of side c : ");
    scanf("%f",&side3);
    semiperimeter(side1,side2,side3);
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar.\n");
    return 0;
}
