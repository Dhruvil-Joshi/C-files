#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Only applicable for number 1 to 5*/
int main()
{

    int i,k,j,n;
    printf("Enter the number from 1 to 5 : ");
    scanf("%d", &n);
    for(i=0;i<(2*n)-1;i++)
    {
        for(j=0;j<(2*n)-1;j++)
        {
            if(i==0 || i==((2*n)-2) || j==0 || j==((2*n)-2))
            {
                printf("%d ",n);
            }
            else if((i==1&&j!=0)||(j==1&&i!=0)||(j==((2*n)-3)&&i!=((2*n)-2))||(i==((2*n)-3)&&j!=((2*n)-2)))
            {
                printf("%d ",n-1);
            }
             else if((i==2&&j!=1&&j!=0)||(j==2&&i!=1&&i!=0)||(i==((2*n)-4)&&j!=((2*n)-2)&&(2*n)-3)||(j==((2*n)-4)&&i!=((2*n)-2)&&(2*n)-3))
            {
                printf("%d ",n-2);
            }
            else if((i==3&&j!=2&&j!=1&&j!=0)||(j==3&&i!=2&&i!=1&&i!=0)||((i==((2*n)-5)&&j!=((2*n)-2)&&(2*n)-3)&&(2*n)-4)||((j==((2*n)-5)&&i!=((2*n)-2)&&(2*n)-3)&&(2*n)-4))
            {
                printf("%d ",n-3);
            }
            else if((i==4&&j!=3&&j!=2&&j!=1&&j!=0)||(j==4&&i!=3&&i!=2&&i!=1&&i!=0)||(((i==((2*n)-6)&&j!=((2*n)-2)&&(2*n)-3)&&(2*n)-5)&&(2*n)-4)||(((j==((2*n)-6)&&i!=((2*n)-2)&&(2*n)-4)&&(2*n)-3)&&(2*n)-4))
            {
                printf("%d ",n-4);
            }
        }
        printf("\n");
    }// Complete the code to print the pattern.
    return 0;
}
