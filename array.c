#include<stdio.h>

void display(int* array,int* length)
{   
    printf("length of the array: %d\n",*length);
    for(int i=0;i<*length;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void insert(int* arr,int element, int index, int *length)
{   
    int i;
    for(i=*length-1;i>=index;i--)
    {   
        arr[i+1] = arr[i];
        if(i==index)
        {   

            arr[i] = element;
     
            *length+=1;
            
            break;
        }
      
    }
}

void delete(int* arr, int index, int *length)
{   
    int i;
    for(i=index;i<*length;i++)
    {  
        arr[i] = arr[i+1];
    }
    *length-=1;
}


void add(int* array,int index, int value)
{
    array[index] += value; 
}

void main()
{   

    int position, value;
    int arr[] = {1,2,5,1,2};
    int length = sizeof(arr)/sizeof(int);
    display(&arr[0],&length);



    printf("\nEnter the element to be insertes : ");
    scanf("%d",&value);
    printf("\nEnter the position to be inserted : ");
    scanf("%d",&position);
    insert(&arr[0],value,position,&length);
    display(&arr[0],&length);

    printf("\nEnter the value to be added : ");
    scanf("%d",&value);
    printf("\nEnter the position to be added : ");
    scanf("%d",&position);
    add(&arr[0],position,value);
    display(&arr[0],&length);

    printf("\nEnter the position to be deleted : ");
    scanf("%d",&position);
    delete(&arr[0],position,&length);
    display(&arr[0],&length);


}