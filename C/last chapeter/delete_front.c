#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data ;
    struct list *link;
};
typedef struct list* node;
node head=NULL;
void insert_end(int d)
{
    node ptr,temp;
    ptr=(node)malloc(sizeof(node));
    if(ptr==NULL)
    {
        printf("Memory allocation failed!");
        return ;
    }
   
    temp=head;
    while(temp->link!=NULL)
    temp=temp->link;
    temp->link=ptr;

    ptr->data=d;
    ptr->link=NULL;
    
    return ;
}
void delete_front(){
    node ptr;
    if(head==NULL)
    {
        printf("List is already Empty!\n");
        return ;
    }
    else
    {
        ptr=head->link;
        int n=head->data;
        free(head);
        printf(" %d Succesfully delted from front.\n",n);
        head=ptr;

    }
}
void delete_end()
{
    node ptr,t;
    if(head==NULL)
    {
        printf("List is already empty!\n");
        return ;
    }
    ptr=head;
    
    while(ptr->link!=NULL)
    {
        t=ptr;
        ptr=ptr->link;
    }
   int n=ptr->data;
    t->link=NULL;
    free(ptr);
    printf("\n%d is Deleted from end \n",n);
    return;

}
void delete_at_pos(int );
int main(){
    head=malloc(sizeof(node));
    head->data=0;
    head->link=NULL;
    
    for(int i=0;i<10;i++)
    insert_end(i+1);

    printf("elments before deletion:\n");
    node ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
    for(int i=1;i<5;i++)
    delete_front();
    printf("\nElements after Deletion front:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    delete_end();
    ptr=head;
    printf("Elements after deltion End:\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\nEnter the position to delete:");
    int p;
    scanf("%d",&p);
    delete_at_pos(p);
    printf("\nAfter deletion at position %d\n",p);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

return 0;
}
void delete_at_pos(int p)
{
    node ptr,t;
    if(head==NULL)
    {
        printf("List is already empty!\n");
        return;
    }
    ptr=head;
    for(int i=2;i<=p;i++)
    {   t=ptr;
        ptr=ptr->link;
        if(ptr==NULL) break;
    }
    if(ptr!=NULL)
    {
        if(ptr==head) head=head->link;
        t->link=ptr->link;
        free(ptr);
        printf("\n%d position node deleted!\n",p);

    }
    else
    printf("Invalid input !!!!!!!!");
}