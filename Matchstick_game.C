//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
int main()
{
 int user,total=21;
 clrscr();
 printf("\t\t\t\tMatchstick game\n");
 printf("\t\t\t-------------------------------\n");
 printf("\t\t\t\tRules of Game\n");
 printf("\t\t\t\t-------------\n");
 printf("\t\tThere are total 21 match sticks to be taken.\n");
 printf("User and computer is allowed to take matchsticks from only 1 to 4 at a time.\n");
 printf("\t\tWhoever picks the last matchstick loses the game.\n\n");
 while(total<=21)
 {
 printf("Number of match sticks taken by user is : ");
 scanf("%d",&user);
 if(user>4||user<1)
 {
	printf("Invalid value entered\n");
	continue;
 }
 printf("Number of match sticks taken by computer is : %d\n",5-user);
 total=total-5;
 if(total==1)
 {
	break;
 }
 }
 printf("Number of match sticks taken by user is : %d\n\n",total);
 printf("User losses and computer wins");
 printf("\n\n");
 printf("This program is made by 22CE044 Joshi Dhruvil Sandipkumar.");
 getch();
 return 0;
}
