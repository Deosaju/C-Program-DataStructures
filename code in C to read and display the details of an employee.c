#include<stdio.h>
struct 
{
    int empid;
    char empname[20];
   float salary;
}employee;
int main()
{

    printf("enter name of employee : ");
    scanf("%s",&employee.empname);
    printf("enter Id of employee : ");
    scanf("%d",&employee.empid);
    printf("enter salary of employee : ");
    scanf("%f",&employee.salary);

    printf("%s  %5d  %5f",employee.empname,employee.empid,employee.salary); 
}