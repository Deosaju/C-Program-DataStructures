//introduction to file
#include<stdio.h>
int main()
{
    FILE *filepointer;
    filepointer = fopen("deo.txt","w+");
    char str[10];
    fprintf(filepointer,"deosaju");
    fseek(filepointer,7,SEEK_SET);
    fprintf(filepointer,"deosaju");
    fseek(filepointer,-7,SEEK_CUR);
    fprintf(filepointer,"leosaju");
    fclose(filepointer);
}