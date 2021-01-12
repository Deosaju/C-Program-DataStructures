#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
int main(){
    int Content[]={1,2,3,4,5,6,7,8,9};
    int Max=sizeof(Content)/sizeof(Content[0]);
    int Elem;
    printf("Enter the number to be searched :: ");
    scanf("%d",&Elem);
    int result = binarySearch(Content,0, Max-1, Elem); 
    (result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d",result); 
    
}