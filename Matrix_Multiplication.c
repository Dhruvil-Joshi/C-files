//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
int main()
{
    int i,j,x,A[3][3],B[3][3],C[3][3];
    int k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element A[%d][%d] : ",i+1,j+1);
            scanf("%d",&A[i][j]);
            k++;
            if((k%3)==0)
            {
                printf("\n");
            }
            if(k>=9)
            {
                break;
            }
        }
    }
    printf("\n");
    printf("Matrix A :");
    k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {    if((k%3)==0)
        {
            printf("\n");
        }
                 printf("%d\t",A[i][j]);
                 k++;
        if(k==9)
        {
            break;
        }
            }
    }
    printf("\n\n");
    k=0;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element B[%d][%d] : ",i+1,j+1);
            scanf("%d",&B[i][j]);
            k++;
            if((k%3)==0)
            {
                printf("\n");
            }
            if(k>=9)
            {
                break;
            }
        }
    }
    printf("\n");
    k=0;
    printf("Matrix B :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {    if((k%3)==0)
        {
            printf("\n");
        }
                 printf("%d\t",B[i][j]);
                 k++;
        if(k==9)
        {
            break;
        }
            }
    }
    printf("\n\n");
    k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=0;
            for(x=0;x<3;x++)
            {
              C[i][j]=C[i][j]+(A[i][x]*B[x][j]);
            }
        }
    }
    k=0;
    printf("Multiplication of Matix A and B : ");
    printf("\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("%d\t",C[i][j]);
        k++;
        if((k%3)==0)
        {
            printf("\n");
        }
    }
    }
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar\n\n");
return 0;
}
