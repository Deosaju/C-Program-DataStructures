/*Write a C program to implement Stack using Array to perform different operation like
 push, pop,peek,isEmpty, isFull?
*/

#include<stdio.h>
#include<stdlib.h>

struct stackarr
{
	int Capacity;
	int Top;
	int *Array;
};
//Check the Stack is full
int isFull(struct stackarr *Stack){
    if(Stack->Top==Stack->Capacity-1)
        return 1;
    else
        return 0;    
}
//Check the Stack is Empty
int isEmpty(struct stackarr *Stack){
    if(Stack->Top==-1){
        return 1;}
    else
        return 0;        
}
//Pushing an element
void Push(struct stackarr* Stack){
    int x;
    printf("Enter number to be pushed :: ");
    scanf("%d",&x);
    if(isFull(Stack))
        printf("The Stack is Full !\n");
    else{
        Stack->Array[++Stack->Top]=x;
    }
}
int Pop(struct stackarr* Stack){
    int x;
    if(isEmpty(Stack))
        printf("The Stack is Empty !\n");
    else{
        x=Stack->Array[Stack->Top--];
        printf("The poped element is %d \n",x);
    }
    return x;
}
//Getting the top most element!
void Peek(struct stackarr* Stack){  
    if(!isEmpty(Stack))
        printf("The  Top Stack Element :: %d \n",Stack->Array[Stack->Top]);
    else
        printf("The Stack is EMPTY\n");
}


void main()
{
	int n, x, ch=0, i;
	printf("Enter the maximum number of elements in the stack : ");
	scanf("%d", &n);
	struct stackarr Stack;
	Stack.Array = (int *)malloc(sizeof(int) * n);
	Stack.Capacity = n;
	Stack.Top = -1;
    printf("Push an element -->  1 !\n");
    printf("Pop an Element  -->  2 !\n");
    printf("Peek in Stack   -->  3 !\n");
    printf("Enter -1 to break the while loop !\n");
    while(ch!=-1){
        printf("Enter number to do the same !\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                Push(&Stack);
            break;
            case 2:
            {
                Pop(&Stack);
                
            }
            break;
            case 3:
                Peek(&Stack);
            break;
            default:
                break;
        }
    }
}

