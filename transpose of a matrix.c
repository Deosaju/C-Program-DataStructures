//transposeof a matrix
#include<stdio.h>
int main()
{
    int n,m,a,b,temp=0;
    int *ptr1,*ptr2;
    printf("enter no of rows and columns (mxn) :");
    scanf("%d %d",&m,&n);
    ptr1=&m;ptr2=&n;
    int arr[*ptr1][*ptr2];
    printf("\nenter the elements:");
    for(a=0;a<m;a++)
    {
        for(b=0;b<n;b++)
        {
            scanf("%d",&arr[a][b]);
        }
        printf("\n");
    }

    printf("entered array is ................\n");
    for(a=0;a<m;a++)
    {
        for(b=0;b<n;b++)
        {
            printf("\t\t%d",arr[a][b]);
        }
        printf("\n");
    }
    printf("__________________________________");
    // transpose
    for(a=0;a<m;a++)
    {
        for(b=0;b<n;b++)
        {
           temp=arr[a][b];
           arr[a][b]=arr[b][a];
           arr[b][a]=temp;
        }
    }
     printf("__________________________________\n");
     for(a=0;a<m;a++)
    {
        for(b=0;b<n;b++)
        {
            printf("\t\t%d",arr[a][b]);
        }
        printf("\n");
    }
}