#include<stdio.h>
int main()
{
    char str1[100],str2[20];
    int start,len=0,len2=0,li=0;
    printf("enter the two strings(with out space)");
    scanf("%s  %s",str1,str2);
    for(start=0;str1[start]!='\0';start++)
    {
        len++;
    }
    printf("\nthe length of first string is :%d",len);
    for(start=0,len2=0;str2[start]!='\0';start++)
    {
        len2++;
    }
    printf("\nthe length of second string is :%d",len2);
    printf("\n%s",str2);
    li=0;
    while(li!=len2)
      {
          str1[len]=str2[li];
          len++;li++;
      }
    printf("\n%s",str1);
}