#include<stdio.h>//copare two strings
int main()
{
    char one[]="saju ",two[]="saju ";
    int len1=0,len2=0,start,check;
    for(start=1;one[start]!='\0';start++)
    {
        if(one[start]!='\0');
        {
            len1++;
        }
    }
    for(start=1;two[start]!='\0';start++)
    {
        if(two[start]!='\0');
        {
             len2++;
        }
    }
    if(len1==len2)
    {
        for(check=1;check<=len1;check++)
        {
            if(one[check]==two[check])
            {
                continue;
            }
            else if(one[check]!=two[check])
            {
                 printf("\n\tthey are not same");
                break;
            }
        }
    }
    else
    {
        printf("\n\tthey are not same");
    }
    check--;
    if(check==len1)
        printf("\n\tthey are same");

}