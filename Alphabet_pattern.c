#include<stdio.h>
int main()
{
    char i,j,k;
    for(i='A';i<='E';i++)
    {
        for(k='E';k>i;k--)
        {
            printf("\t");
        }
        for(j='A';j<=i;j++)
        {
            printf("%c\t\t",i);
        }
        printf("\n");
    }
    return 0;
}
