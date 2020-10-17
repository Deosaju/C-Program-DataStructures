#include<stdio.h>
#include<math.h>//print all number
int main()
{
    int num,i,count=0;
    printf("enter a number upt o check prime");
    scanf("%d",&num);
    int root = sqrt(num) ;
   for(int i=2; i<=root; i++)
   {
      if(num%i == 0)
      {
          printf("not prime");
        break;
      }
      if(i==root)
      {
         printf("prime");
      }
   }
}