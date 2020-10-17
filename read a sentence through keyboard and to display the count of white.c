// read a sentence through keyboard and to display the count of white spaces in the given sentence.
#include<stdio.h>
int main()
{
    int count=0,start;
    char sentence[1000];
    printf(" enter the sentence to count white spaces");
    gets(sentence);
    for(start=0;sentence[start]!='\0';start++)
    {
        if(sentence[start]==' ')
         count++;
    }
    printf("%d",count);



}