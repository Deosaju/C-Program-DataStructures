// matrix to store and sum uo the rows by arguments
#include<Stdio.h>
int main()
{
    int r,c,row=0,column=0,sum;
    printf("enter the no of rows and columns ; \t");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    printf("\n enter the elements in order");
    for(row=0;row<r;row++)
    {
        for(column=0;column<c;column++)
        {
            scanf("%d",&matrix[row][column]);
        }
    }
    for(row=0;row<r;row++)
    {
        for(column=0;column<c;column++)
        {
            printf("%3d",matrix[row][column]);
        }
        printf("\n");
    }
    for(row=0;row<r;row++)
    {
        printf("%d row :",row);
        for(column=0,sum=0;column<c;column++)
        {
            sum += matrix[1][column];
        }
        printf("%3d \n ",sum);
    }

}