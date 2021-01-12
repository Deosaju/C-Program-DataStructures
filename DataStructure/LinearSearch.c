#include<stdio.h>
int main(){
    int Arrlen,Elem,count=0;
    int array[]={1,100,5,3,7,9,3,4};
    printf("Enter number to be searched ::");
    scanf("%d",&Elem);
    Arrlen=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<Arrlen;i++){
        if(Elem==array[i])
        {    
            printf("\n %d :: is at postion :: %d",array[i],i);
            count++;
        }
        
    }
    if(count==0)
        printf("The element is not in the list ");
}