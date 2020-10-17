//check whether a given matrix is a diagonal matrix
#include<stdio.h>
int main()
{
    int r,c,column,row;
    printf("enter no of rows and columns : " );
    scanf("%d %d",&row,&column);
    if(r==c)
    {
        int matrix[r][c];
        printf("enter the elements :");
        for(r=0;r<row;r++)
        {
            for(c=0;c<column;c++)
            {
                scanf("%d", &matrix[r][c]);
            }
        }

        for(r=0;r<row;r++)
        {
            for(c=0;c<column;c++)
            {
                if(r!=c && matrix[r][c]==0)
                    printf("the matrix is diagonal");
            }
        }
    }
}