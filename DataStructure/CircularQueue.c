    #include<stdio.h>
    #include<stdlib.h>

    struct stackarr
    {
        int Capacity;
        int Front;
        int Rear;
        int *Array;
    };
    void Enqueue(struct stackarr* Queue)
    {
        if((Queue->Rear+1)%Queue->Capacity == Queue->Front)  
    {       
        printf("\nOVERFLOW");  
        return;  
    }  
    else if(Queue->Front == -1 && Queue->Rear == -1)  
    {  
        Queue->Front = 0;  
        Queue->Rear = 0;  
    }   
    else if(Queue->Rear == Queue->Capacity -1 && Queue->Front != 0)   
    {  
        Queue->Rear = 0;  
    }  
    else   
    {  
        Queue->Rear = (Queue->Rear+1)%Queue->Capacity;  
    }
    int value;
    printf("\n Enter the element to add in queue ::");
    scanf("%d",&value);  
    Queue->Array[Queue->Rear] = value;  
    }
void Dequeue(struct stackarr* Queue)
{
   if(Queue->Front == -1 && Queue->Rear == -1)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else if(Queue->Front == Queue->Rear)  
    {  
        printf(" \n Dequeueed element is %d",Queue->Array[Queue->Front]); 
        Queue->Front = -1;  
        Queue->Rear = -1;
         
    }  
    else if(Queue->Front == Queue->Capacity -1)  
        {  
            
            printf(" \n Dequeueed elemnt is %d",Queue->Array[Queue->Front]);
            Queue->Front = 0;    
        }  
    else  {
        printf(" \n Dequeueed elemnt is %d",Queue->Array[Queue->Front]);
        Queue->Front = Queue->Front + 1;        
    }
}
void Peek(struct stackarr* Queue){
    if(Queue->Front == -1 && Queue->Rear == -1)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    } 
    printf(" \n Top elemnt is %d",Queue->Array[Queue->Front]);
}

void main()
{
    int n, x, ch=0, i;
    printf("Enter the maximum number of elements in the stack : \n");
    scanf("%d", &n);
    struct stackarr Queue;
    Queue.Array = (int *)malloc(sizeof(int) * n);
    Queue.Capacity = n;
    Queue.Rear = -1;
    Queue.Front = -1;
    printf("Enqueue an element -->  1 !\n\n");
    printf("Dequeue an Element  -->  2 !\n\n");
    printf("Peek in Queue   -->  3 !\n\n");
    printf("Enter -1 to break the while loop !\n\n");
    while(ch!=-1){
        printf("\nEnter number to do the same !\n\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
               Enqueue(&Queue);
            break;
            case 2:
            {
                Dequeue(&Queue);
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
