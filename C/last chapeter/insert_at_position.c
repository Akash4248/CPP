#include<stdio.h>
#include<stdlib.h>
struct list{
    int data;
    struct list *link;
};
typedef struct list* node;
void insert_at_position(int ,int ,node);
node insert_front(int d,node head)
{
    node ptr=(node)malloc(sizeof(node));
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    return head;
}
void insert_end(int d,node head)
{
    node ptr,temp;
    ptr=(node)malloc(sizeof(node));
    
    temp=head;
    if(head==NULL)
    {
        head=ptr;
        head->data=d;
        head->link=NULL;
        return ;
    }
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr;
    ptr->data=d;
    ptr->link=NULL;
}
int main(){
    node head=(node)malloc(sizeof(node));
    head->data=0;
    head->link=NULL;
    printf("INITIAL LIST:\n%d",head->data);
    printf("\nLIST AFTER INSERTION AT FRONT:\n");
    for(int i=1;i<=5;i++)
    {
        head=insert_front(i,head);
    }
    node ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\nLIST AFTER INSERTION AT END:\n");
    ptr=head;
    for(int i=10;i<=15;i++)
    insert_end(i,head);
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\nEnter the position to add a element:");
    int n,p;
    scanf("%d",&p);
    printf("Enter the data to be added in that position:");
    scanf("%d",&n);
    insert_at_position(n,p,head);
    printf("Elements after insertion:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
void insert_at_position(int n,int p,node head)
{
    node ptr=(node)malloc(sizeof(node));
    node temp=head;
    if(ptr==NULL)
    {
        printf("Memory allocation failed!");
        return;
    }
    else
    {
        ptr->data=n;
        ptr->link=NULL;
        for(int i=2;i<p-1;i++)
    {
        temp=temp->link;
        if(temp==NULL) break;
    }

    if(temp!=NULL)
    {
        ptr->link=temp->link;
        temp->link=ptr;
        printf("\nItem Inserted!\n");
    }
    else
    {
        printf("Element cannot be inserted!\n");
        return ;
    }

    }
}