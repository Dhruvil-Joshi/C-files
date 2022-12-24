//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<string.h>
void palindrome(char str[],int i)
{
    int length=strlen(str)-(i+1);
    if(str[i]==str[length])
    {
        if(i==length||(i+1)==length)
        {
            printf("The entered string is palindrome");
            return;
        }
    palindrome(str,i+1);
    }
        else
        {
            printf("The entered string is not palindrome");
        }
    }
int main()
{
    char str1[20];
    printf("Enter a string to check whether it is palindrome or not : ");
    scanf("%s",str1);
    palindrome(str1,0);
    printf("\n\nThis program is amde by 22CE044 Joshi Dhruvil Sandipkumar");
    return 0;
}
