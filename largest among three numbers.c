//find largest among three numbers
#include<stdio.h>
int main()
{
    int a=5,b=1,c=3;
    if(a>b)
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    else if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
}
