//read an English Alphabet through keyboard and display whether the given Alphabet is in upper case or lower 
#include<stdio.h>
int main()
{
    char check;
    printf("enter the char from keyboard ; ");
    scanf("%c",&check);
    int ASCII=check;
   
    if(ASCII>64 && ASCII<91)
        printf("it is upper case");
    else if(ASCII>96 && ASCII <123)
        printf("it is lower case");
    else
        printf("not an alphabet");
        
}