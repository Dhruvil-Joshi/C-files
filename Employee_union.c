//This program is made by 22CE044 Joshi Dhruvil Sandipkumar
#include<stdio.h>
struct Employee
{
    char Name[200];
    int Age;
    struct Employeedetail
    {
        char Address[300];
        int Salary;
    }ed;
}e;
void data(struct Employee e)
{
    printf("Here are the details of employee named %s :",e.Name);
    printf("\nName : %s",e.Name);
    printf("\nAge : %d",e.Age);
    printf("\nAddress : %s",e.ed.Address);
    printf("\nSalary : %d",e.ed.Salary);
}
int main()
{
    printf("Enter the details of employee here : \n");
    printf("Enter the name of employee : ");
    fflush(stdin);
    scanf("%[^\n]s",e.Name);
    printf("Enter the age of employee : ");
    fflush(stdin);
    scanf("%d",&e.Age);
    printf("Enter the address of employee : ");
    fflush(stdin);
    scanf("%[^\n]s",e.ed.Address);
    printf("Enter the salary of employee : ");
    fflush(stdin);
    scanf("%d",&e.ed.Salary);
    printf("\n\n");
    data(e);
    return 0;
}
