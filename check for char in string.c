#include<stdio.h>
#include<string.h>//check a char to be in string
int main()
{
     int start=0,len;
    char str[10]="malayalam";
    char find;
    printf("enter a character to find out in string");
    scanf("%c",&find);
    len=strlen(str);
   printf("%d string length",len);
   for(start;start<len;start++)
   {
        if(str[start]==find)
            printf("\ncharacter  '%c' is found at this location :%d",find,start);
            continue;

   }
}