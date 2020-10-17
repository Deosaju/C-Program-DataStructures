#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* previous;
    int data;
    struct node* next;
};
struct node* head=NULL,*start=NULL,*temp=NULL;
int addpos()
{
    int data;
    printf("\nEnter position to be node added :");
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
    printf("\nDisplay list : 5");
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
        start=new_node;
        return;
    }
    while(start->next!=NULL)
    {
        start=start->next;
    }
    if(start->next==NULL)
    {
        start->next=new_node;
        new_node->previous=start->next;
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
        temp=delete;
        delete=delete->next;
    }
    if(delete==NULL)
    {
        printf("\n\"the element is not found in list\"\n");
        return;
    }
    temp->next = delete->next;
    delete->next->previous=temp;//unlink thenode to be deleted
    free(delete);//freeing memory not used
}
void posadd(struct node* posnode,int key)
{
    start=head;
    int i=0;
    if(start==NULL && key==0)//if position is head node
    {
        head=posnode;
        head->previous=NULL;
        head->next=NULL;
        return;
    }
    while(i<(key-1) && start!=NULL)
    {
        start=start->next;
        i++;
    }
    if(start==NULL)
    {
        printf("\n\"position is out of scope\"\n");
        return ;
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
            new_node->previous=NULL;
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
            data=getdel();
            struct node* delete=(struct node*)malloc(sizeof(struct node));
            start=head;
            delete=start;
            delnode(delete,data);
            break;
        case 5:
            if(head==NULL)
            {
                printf("\nlist is empty,try creating a new list\n");
                break;
            }
            printf("\n");
            display_list(head);
            break;
        default :
            exit(0);
        }
    }
}