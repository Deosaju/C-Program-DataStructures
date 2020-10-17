//find sum of digits in integer
#include<stdio.h>
int main()
{
    int a=10342423,sum=0;
    for(;a>0;a=a/10)
    {
        sum+=a%10;
    }
    printf("sum of the integer %d",sum);
}