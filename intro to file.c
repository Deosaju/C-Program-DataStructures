#include<stdio.h>//opening a file and adding some text and taking outputs
int main()
{
    int i;
    FILE *deo;
  
    deo=fopen("deo.txt", "w");
    printf("enter a number to right in the file");
    scanf("%d",&i);
    fprintf(deo,"%d",i);
    fclose(deo);


    deo=fopen("deo.txt","r");
    fscanf(deo,"%d",&i);
    printf("\n%d",i);
    fclose(deo);
}