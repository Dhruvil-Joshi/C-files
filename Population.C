//This program is made by 22TCE072 Joshi Dhruvil Sandipkumar
#include<stdio.h>
#include<conio.h>
int main()
{
 long int p=80000,m,w,lp,lm,lw,ip,im,iw;
 clrscr();
 printf("Total Population = 80000\n");
 lp=48*p/100;
 printf("Number of Literate (Men + Women) = %ld\n",lp);
 m=52*p/100;
 printf("Number of Men = %ld\n",m);
 lm=35*p/100;
 printf("Number of Literate Men = %ld\n",lm);
 im=m-lm;
 printf("Number of illiterate Men = %ld\n",im);
 w=p-m;
 printf("Number of Women = %ld\n",w);
 lw=lp-lm;
 printf("Number of Literate Women = %ld\n",lw);
 iw=w-lw;
 printf("Number of illiterate Women = %ld\n",iw);
 printf("\n\n");
 printf("This program is made by 22TCE072 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}