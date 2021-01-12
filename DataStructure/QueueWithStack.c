//Queues using Stacks implimented using 2 Stacks
/*Write a C program to implement Stack using Array to perform different operation like
 push, pop,peek,isEmpty, isFull?
*/

#include<stdio.h>
#include<stdlib.h>

struct stackarr
{
	int Capacity;
    int Top1;
    int Top2;
    int *Stack1;
    int *Stack2;
};
//Check the Stack is full
int isFull1(struct stackarr *Stack){
    if(Stack->Top1==Stack->Capacity-1)
        return 1;
    else
        return 0;    
}
int isFull2(struct stackarr *Stack){
    if(Stack->Top2==Stack->Capacity-1)
        return 1;
    else
        return 0;    
}
//Check the Stack is Empty
int isEmpty(struct stackarr *Stack){
    if(Stack->Top1==-1){
        return 1;}
    else
        return 0;        
}
int isEmpty2(struct stackarr *Stack){
    if(Stack->Top2==-1){
        return 1;}
    else
        return 0;        
}
void Enqueue(struct stackarr* Stack){
    int x;
    if(isFull1(Stack))
        printf("The Stack is Full !\n");
    else{
        printf("Enter number to be pushed :: ");
        scanf("%d",&x);
        Stack->Stack1[++Stack->Top1]=x;
    }
}
int Dequeue(struct stackarr* Stack){
    int x;
    int decison;
    if(isEmpty(Stack))
        printf("The Stack is Empty !\n");
    else{
        x=Stack->Stack1[Stack->Top1--]; 
        Stack->Stack2[++Stack->Top2]=x;
    }
    if(!isEmpty2(Stack))
    {
        printf("\nDo you wish to Poped elements (Press 1)/(Press anyother to Skip) ::");
        scanf("%d",&decison);
        switch(decison){
            case 1:
                {
                    for(int i=Stack->Top2;i>-1;i--)
                    {
                        x=Stack->Stack2[i];
                        printf("%d",x);
                    }
                    Stack->Top2=-1;
                    break;
                }
            default:
                break;
        }

    }
}
int PopQue(struct stackarr* Stack){
    int x;
    int decison;
    if(isEmpty2(Stack))
        printf("The Stack is Empty !\n");
    else{
        x=Stack->Stack2[Stack->Top2--];
        printf("%d  ",x);
    }
}
void main()
{
	int n, x, ch=0, i;
	printf("Enter the maximum number of elements in the stack : ");
	scanf("%d", &n);
	struct stackarr Stack;
	Stack.Stack1 = (int *)malloc(sizeof(int) * n);
	Stack.Stack2 = (int *)malloc(sizeof(int) * n);
	Stack.Capacity = n;
	Stack.Top1 = -1;
    Stack.Top2 = -1;
    printf("Push an element -->  1 !\n");
    printf("Pop an Element  -->  2 !\n");
    printf("Pop Queue   -->  3 !\n");
    printf("Enter -1 to break the while loop !\n");
    while(ch!=-1){
        printf("\nEnter number to do the same !\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                Enqueue(&Stack);
            break;
            case 2:
            {
                Dequeue(&Stack);
                
            }
            break;
            case 3:
                PopQue(&Stack);
            break;
            default:
                break;
        }
    }
}

