#include<stdio.h>
int fac(int num)
{
    if(num==1||num==0)
        return 1;
    else
       return num*fac(num-1);

}
int main()
{
    int factorial,num;
    printf("enter a number to find factorial");
    scanf("%d",&num);
    factorial= fac(num);
    printf("factorial is %d",factorial);

}
