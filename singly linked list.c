#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL,*start=NULL,*previous=NULL,*temp=NULL;
int addpos()
{
    int data;
    printf("\nEnter position to be node added :");
    scanf("%d",&data);//scanf always end with a newline
     //printf("\n %d",data);
    return data;
}
int getpos()
{
    int data;
    printf("\nEnter position to be deleted in node :");
    scanf("%d",&data);//scanf always end with a newline
     //printf("\n %d",data);
    return data;
}
int getdel()
{
    int data;
    printf("\nEnter data to be deleted in node :");
    scanf("%d",&data);//scanf always end with a newline
     //printf("\n %d",data);
    return data;
}
int getdata()
{
    int data;
    printf("\nEnter data to be added in node :");
    scanf("%d",&data);//scanf always end with a newline
     //printf("\n %d",data);
    return data;
}
int getoption()
{
    int option;
    printf("\nAppend an element to list : 1");
    printf("\nAdd a node at specific position : 2");
    printf("\nDelete an element from list by data : 3");
    printf("\nDelete element by position : 4");
    printf("\nDisplay list : 5");
    printf("\nFor exiting the program : 6");
    printf("\n\nChoose option  : ");
    scanf("%d",&option);
    return option;
}
void display_list(struct node *start)
{
    printf("\n");
    while(start!=NULL)
    {
        printf("%d",start->data);
        if(start->next!=NULL)
            printf("->");
        start=start->next;
    }
}
void addnode(struct node *new_node)
{
    start=head;
    if(head==NULL)
    {
        head=new_node;
        head->next=NULL;
        return;
    }
    while (start->next!=NULL)
    {
        start=start->next;
    }
    
    if(start->next == NULL)
    {
        start->next=new_node;
        new_node->next=NULL;
        return;
    }

}
void delnode(struct node *delete,int key)
{
    if(delete != NULL && delete->data == key)//check whether key is present in head
    {
        head = delete->next;   // Changed head
        free(delete);               // free old head
        return;
    }
    while(delete != NULL && delete->data != key)//traversing to find the key
    {
        previous = delete;//store previous node as previous
        delete = delete->next;//store next node to delete
    }
    if(delete==NULL)
    {
        printf("\nData is not found in the list\n");
        return;
    }
    previous->next = delete->next;//unlink thenode to be deleted
    free(delete);//freeing memory not used
}
void position(struct node *posdel,int key)
{
    int i=0;
    if(posdel!=NULL && key==0)//if position is head node
    {
        head=head->next;
        free(posdel);
        return;
    }
    while(i<(key-1) && posdel!=NULL )
    {
        posdel=posdel->next;
        i++;
    }
    if(posdel==NULL)
    return ;
    temp=posdel->next->next;
    posdel->next=temp;

}
void posadd(struct node* posnode,int key)
{
    start=head;
    int i=0;
    if(start!=NULL && key==0)//if position is head node
    {
        posnode->next=head;
        head=posnode;
        return;
    }
    while(i<(key-1) && start!=NULL)
    {
        start=start->next;
        i++;
    }
    if(start==NULL)
    {
        return ;
        printf("\nData is not present in list");
    }
    temp=start->next;
    start->next=posnode;
    posnode->next=temp;
}
int main()
{
    int data;
    int pos;
    while(1)
    {
        switch (getoption())
        {
        case 1:
            data =getdata();
            struct node *new_node=(struct node*)malloc(sizeof(struct node));
            new_node->data=data;
            new_node->next=NULL;
            addnode(new_node);
            break;
        case 2:
            data =getdata();
            pos =addpos();
            struct node *posnode=(struct node*)malloc(sizeof(struct node));
            posnode->data=data;
            posnode->next=NULL;
            posadd(posnode,pos);
            break;
        case 3:
            if(head==NULL)
            {
                printf("\nlist is empty,try creating a new list\n");
                break;
            }
            data=getdel();
            struct node* delete=(struct node*)malloc(sizeof(struct node));
            start=head;
            delete=start;
            delnode(delete,data);
            break;
        case 4:
            if(head==NULL)
            {
                printf("\nlist is empty,try creating a new list\n");
                break;
            }
            data=getpos();
            struct node* posdel=(struct node*)malloc(sizeof(struct node));
            posdel=head;
            position(posdel,data);
        case 5:
            if(head==NULL)
            {
                printf("\nlist is empty,try creating a new list\n");
                break;
            }
            printf("\n");
            display_list(head);
            break;
        case 6:
            exit(0);
        default :
            break;
        }
    }
}