    /*Write a C program to implement Queue using Array to perform different operation like
    push, pop,peek,isEmpty, isFull?
    */
#include<stdio.h>
#include<stdlib.h>

    struct stackarr
    {
        int Capacity;
        int Front;
        int Rear;
        int *Array;
    };
    //Check the Queue is full
    int isFull(struct stackarr *Queue){
        if(Queue->Rear==Queue->Capacity-1)
            return 1;
        return 0;    
    }
    //Check the Queue is Empty
    int isEmpty(struct stackarr *Queue){
        if(Queue->Front==Queue->Rear){
            return 1;}
        return 0;        
    }
    //Pushing an element
    void Push(struct stackarr* Queue){
        int x;
        if(Queue->Rear==Queue->Capacity-1 && Queue->Front==Queue->Capacity-1)
        {
            Queue->Front=-1;
            Queue->Rear=-1;
        }
        if(isFull(Queue))
            printf("The Queue is Full !\n\n");
        else{
            printf("Enter number to be pushed :: ");
            scanf("%d",&x);
            Queue->Array[++Queue->Rear]=x;
        }
    }
    int Pop(struct stackarr* Queue){
        int x;
        
        if(isEmpty(Queue))
            printf("The Queue is Empty !\n\n");
        else{
            x=Queue->Array[++Queue->Front];
            printf("The poped element is %d \n\n",x);
        }
        return x;
    }
    //Getting the top most element!
    void Peek(struct stackarr* Queue){  
        if(!isEmpty(Queue))
            printf("The  Top Queue Element :: %d \n\n",Queue->Array[Queue->Rear]);
        else
            printf("The Queue is EMPTY !\n\n");
    }


    void main()
    {
        int n, x, ch=0, i;
        printf("Enter the maximum number of elements in the stack : ");
        scanf("%d", &n);
        struct stackarr Queue;
        Queue.Array = (int *)malloc(sizeof(int) * n);
        Queue.Capacity = n;
        Queue.Rear = -1;
        Queue.Front = -1;
        printf("Push an element -->  1 !\n\n");
        printf("Pop an Element  -->  2 !\n\n");
        printf("Peek in Queue   -->  3 !\n\n");
        printf("Enter -1 to break the while loop !\n\n");
        while(ch!=-1){
            printf("Enter number to do the same !\n\n");
            scanf("%d",&ch);
            switch (ch)
            {
                case 1:
                    Push(&Queue);
                break;
                case 2:
                {
                    Pop(&Queue);
                }
                break;
                case 3:
                    Peek(&Queue);
                break;
                default:
                    break;
            }
        }
    }
