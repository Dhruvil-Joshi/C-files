//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<math.h>
void divide(int num)
{
  if(num==0)
  {
    return 1;
  }
  else
  {
    divide(num/2);

} printf("%d",num%2);
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
