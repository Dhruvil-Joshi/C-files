//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
int main()
{
    /*Declaring a pointer named data to store address of all members of result array in it*/
    int result[10],*data,i,distinction=0,firstclass=0,pass=0,fail=0;
    data=&result;
    for(i=0;i<10;i++)
    {
        printf("Enter the marks of student with roll number %d : ",i+1);
        scanf("%d",data+i);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        if(*(data+i)>=70)
        {
            printf("The student with roll number %d has passed with distinction",i+1);
            distinction++;
        }
        if(*(data+i)<=69 && *(data+i)>=60)
        {
            printf("The student with roll number %d has passed with first class",i+1);
            firstclass++;
        }
        if(*(data+i)>=40 && *(data+i)<=59)
        {
            printf("The student with roll number %d has passed with passing marks",i+1);
            pass++;
        }
        if(*(data+i)<40)
        {
            printf("The student with roll number %d has failed the examination",i+1);
            fail++;
        }
        printf("\n");
    }
    printf("Count of marks attained by students : ");
    printf("\nDistinction : %d",distinction);
    printf("\nFirst Class : %d",firstclass);
    printf("\nPass : %d",pass);
    printf("\nFail : %d",fail);
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar");
    return 0;
}
