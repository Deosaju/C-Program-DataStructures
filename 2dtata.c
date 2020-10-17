#include<stdio.h>
int main()
{
	int n,arr[4][2],i,j,flag=0;
	printf("enter the array elements:");
	for(i=0;i<4;i++)
		for(j=0;j<2;j++)
			scanf("%d",&arr[i][j]);	
	printf("\nenter value:");
	scanf("%d",&n);
	int sum=0;	
	for(i=0;i<4;i++)
	{
		sum=0;
		sum=sum+arr[i][0]+arr[i][1];
		sum=sum+arr[i+1][0]+arr[i+1][1];
	
		if(sum==n)
		{
			flag=1;
			break;
		}	
		
	}
	if(flag==0)
		printf("\nNO");
	else
		printf("\nYES");
	return 0;
}			
