// read a Natural Number through keyboard and to display the reverse of the given number
#include<stdio.h>
int main()
{
    int number,a,reverse;
    printf("enter a number to reverse : ");
    scanf("%d",&number);
    for(number,a=0;number>0;number=number/10,a++)
    {
        reverse =number%10;
        printf("%d",reverse);
    }
}