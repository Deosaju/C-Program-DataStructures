#include<stdio.h>//check a armstrong number
int main()
{
    int num,copy,armstrong=0,mod,start;
    printf("enter a number to find if armstrong number");
    scanf("%d",&num);
    copy=num;
    for(;copy!=0;copy=copy/10)
    {
        mod=copy%10;
        
        armstrong=armstrong+(mod*mod*mod);
    }
   
    if(armstrong==num)
        printf("%d is armstrong number",num);
    else
    {
         printf("%d is not armstrong number",num);
    }
        

}