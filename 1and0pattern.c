#include<stdio.h>
int main()
{
 int i,j,k;
 printf("Enter a number : ");
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
    for(j=0;j<=i;j++)
    {
        if((j%2)==0)
        printf("1 ");
         if((j%2)!=0)
        printf("0 ");
    }printf("\n");
 }
 return 0;
}
