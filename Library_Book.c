//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
struct Library
{
    char Bookname[100];
    char Author[200];
    float Amount;
}b1;
void display(struct Library b1)
{
    printf("\n\n");
    printf("The details of the book is here : \n\n");
    printf("The book name is : %s",b1.Bookname);
    printf("\nAuthor name is : %s",b1.Author);
    printf("\nThe price of book is : %.2f dollars",b1.Amount);
    printf("\n\nThis program is made by 22CE044 Joshi Dhruvil Sandipkumar");
}
int main()
{
    printf("Enter the book name here : ");
    scanf("%[^\n]s",b1.Bookname);
    printf("Enter the author name here : ");
    scanf("\n%[^\n]s",b1.Author);
    printf("Enter the price of book here : ");
    scanf("\n%f",&b1.Amount);
    display(b1);
    printf("\n");
    return 0;
}
