//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20][20],tem[20];
    int n,i,j;
    printf("Enter the number of students to be sorted : ");
    scanf("%d",&n);
    printf("\nNow enter the names of students here :\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(tem,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tem);
            }
        }
    }
    printf("The name of students in alphabetic order are as follow : \n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
printf("\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar\n\n");
return 0;
}
