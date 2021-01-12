#include<stdio.h>
void printarray(int array[],int size){
    for(int i=0;i<size;i++)
        printf("  %d",array[i]);
        printf("\n");
}
void merge(int array[],int l, int m ,int r){
    int i,j,k;
    int A1=m-l+1;
    int A2=r-m;
    int L[A1],R[A2];
    for (i = 0; i < A1; i++) 
		L[i] = array[l + i]; 
	for (j = 0; j < A2; j++) 
		R[j] = array[m + 1 + j];
    i = 0;  
	j = 0; 
    k = l; 
    while (i < A1 && j < A2) { 
		if (L[i] <= R[j]) { 
			array[k] = L[i]; 
			i++; 
		} 
		else { 
			array[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

    while (i < A1) { 
		array[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < A2) { 
		array[k] = R[j]; 
		j++; 
		k++; 
	} 
}
void  mergesort(int array[],int l ,int r){
    int m=l+(r-l)/2;
    if(l<r){
        mergesort(array,l,m);
        mergesort(array,m+1,r);
        merge(array,l,m,r);
    }
}
int main(){
    int array[]={1,23,0,41,3,5,6,8};
    int size=sizeof(array)/sizeof(array [0]);
    printf("Given Array is ::");
    printarray(array,size);
    mergesort(array,0,size-1);
    printf("Given Array is ::");
    printarray(array,size);
}
