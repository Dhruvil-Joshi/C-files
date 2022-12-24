//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 int A[10];
 int B[10];
 int C[20];
 int k=0,i,j,numA,numB,n;
 clrscr();
 printf("Enter the size of array A : ");
 scanf("%d",&numA);
 printf("\n");
 for(i=0;i<numA;i++)
 {
    printf("Enter the value of A[%d] : ",i+1);
    scanf("%d",&A[i]);
 }
 printf("\n");
 printf("Enter the size of array B : ");
 scanf("%d",&numB);
 printf("\n");
 for(i=0;i<numB;i++)
 {
    printf("Enter the value of B[%d] : ",i+1);
    scanf("%d",&B[i]);
 }
 printf("\n");
 n=numA+numB;
 for(i=0;i<numA;i++)
 {
    C[i]=A[i];
 }
  for(i=0;i<numB;i++)
 {
    C[i+numA]=B[i];
 }

 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
	if(C[i]>C[j])
	{
		k=C[i];
		C[i]=C[j];
		C[j]=k;
	}
    }
 }
 printf("After merging array A and B and sorting it : \n");
 for(i=0;i<n;i++)
 {
	printf("%d ",C[i]);
 }
 printf("\n\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar");
 getch();
 return 0;
}


