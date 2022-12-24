//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
 char password[10];
 int lower,upper,punctuation,digit,i;
// clrscr();
 do
 {
  printf("Enter your password here: ");
  scanf("%s",password);
  lower=0;
  upper=0;
  digit=0;
  punctuation=0;
  for(i=0;i<=strlen(password);i++)
  {
	if(islower(password[i]))
	{
		lower=1;
	}
	else if(isupper(password[i]))
	{
		upper=1;
	}
	else if(isdigit(password[i]))
	{
		digit=1;
	}
	else if(ispunct(password[i]))
    {
        punctuation=1;
    }
  }
	if(lower==1 && digit==1 && punctuation==1 && upper!=1)
	{
	printf("Average Password, but choose strong one\n\n");
	}
	else if(upper==1 && digit==1 && punctuation==1 && lower==1)
    {
    printf("Strong Password, you may proceed\n\n");
    }
    else if(upper==1 || digit==1 || punctuation==1 || lower==1)
	{
	printf("Poor Password, try again!!\n\n");
	}
 }while(lower==0 || digit==0|| upper==0 || punctuation==0);
 printf("\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar");
 //getch();
 //getch();
 //getch();
 return 0;
}
