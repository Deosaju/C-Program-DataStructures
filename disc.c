#include<stdio.h>
int main()
{   
    int count=0;
    for(int i=1;i<=250;i++)
    {
        if(i%3==0)
            count++;
    }
    printf("%d",count);
}