#include<stdio.h>

void swap(int *n,int *m)
{
	int temp = *n;
	*n = *m;
	*m = temp;
}
void print(int ar[5])
{
	int i;
	for(i=0;i<5;i++)
		printf("%d ",ar[i]);
}
/* // bubble sort		
int main()
{
	int ar[5],i,j;
	printf("\nenter the array elements:");
	for(i=0;i<5-1;i++)
		scanf("%d ",&ar[i]);
	printf("\nthe given array is:");
	print(ar);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(ar[i]<ar[j])
				swap(&ar[i],&ar[j]);
	printf("\n sorted array:");
	print(ar);
	return 0;
}				
*/		
int main()
{
	int i,j,min,ar[5];
	printf("\n enter the array elements:");
	for(i=0;i<5;i++)
			scanf("%d",&ar[i]);
	for(i=0;i<5-1;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(ar[j]<ar[min])
				min=j;
		}		
			swap(&ar[i],&ar[min]);
	}
	printf("\nsorted array:");
	print(ar);
	return 0;
}				
	
