/*pattern 1
1
12
123
1234
12345
*/
#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<5;r++)
      {
            for(c=1;c<=r;c++)
          {
             printf("%d",c);
          }
            printf("\n");
        }
}