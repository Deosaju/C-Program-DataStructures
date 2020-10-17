#include<stdio.h>
#include<math.h>//check prime
int main()
{
    int n,i,j;
    double k;
    printf("enter a number :");
    scanf("%d",&n);
    for(j=n;;)
    {
        if(j==2||j==3||j==5)
        {
          printf("\nprime %3d",j);
          break;
        }
        k=(double)sqrt(j);
        i=k;
        if(i==k)
            {
                printf("not prime %3d",n);
                break;
            }
        else
        {
            printf("prime %3d",n);
            break;
        }
    }
}