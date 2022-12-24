//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
union Library
{
    int accessionnumber;
    char Bookname[200];
    char Author[200];
    float price;
    int flag;
}b1;
int main()
{
    printf("Enter the details of the book : ");
    printf("\nEnter the accession number of the book : ");
    fflush(stdin);
    scanf("%d",&b1.accessionnumber);
    printf("The accession number of book is : %d",b1.accessionnumber);
    printf("\nEnter the name of the book : ");
    fflush(stdin);
    scanf("%[^\n]s",b1.Bookname);
    printf("The name of book is : %s",b1.Bookname);
    printf("\nEnter the author of the book : ");
    fflush(stdin);
    scanf("%[^\n]s",b1.Author);
    printf("The name of author of book is : %s",b1.Author);
    printf("\nEnter the price of the book : ");
    fflush(stdin);
    scanf("%f",&b1.price);
    printf("The price of book is : %f",b1.price);
    printf("\nEnter the flag value 1 or 0 : ");
    fflush(stdin);
    scanf("%d",&b1.flag);
    if(b1.flag==0)
    {
        printf("The book is not issued");
    }
    else
    {
        printf("The book is issued");
    }
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar");
    return 0;
}
