//to find length of the string recursively
#include<stdio.h>
static int value=0;
int recursive(char str[])
{
    value=0;
    if(str[value]=='\0')
        return 1;
    else
    {
        value++;
        return recursive(str);
    }

}
int main()
{
    int len=0;
    char str[10]="deosaju";
    len = recursive(str);
    printf("%d",len);


}
