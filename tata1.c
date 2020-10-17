
#include <stdio.h>
void printarray(int arr[])
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void permutation(int *arr, int start, int end,int ele,int index)
{
    if(start==end)
    {
		if(arr[index]==ele)
			printarray(arr);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        swap((&arr[i]), (&arr[start]));
        permutation( arr, start+1, end,ele,index);
        swap((&arr[i]), (&arr[start]));
    }
}

int main()
{
    int i,index,ele;
    int arr[4];
    printf("\n enter array elements:");
    for(i=0;i<4;i++)
        scanf("%d",&arr[i]);
    printf("\n enter the index:");
    scanf("%d",&index);
    ele=arr[index];
    permutation(arr,0,3,ele,index);
    return 0;
}

		
		
			
