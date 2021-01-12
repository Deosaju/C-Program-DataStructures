#include<stdio.h>
int main()
{
    char *one,*two,*temp;
    one="deosaju";
    two="leosaju";
    printf("%s    %s",one,two);
    temp=one;
    one=two;
    two=temp;

    printf("\n%s    %s",one,two);

}