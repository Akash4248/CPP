#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* link;
};
typedef struct node* node;
void insert_at_end(int x,node head) 
{ 
node t,temp;
   t = (node)malloc(sizeof( node)); 
   
   if (head == NULL) { 
      head = t; 
      head->data = x; 
      head->link = NULL; 
      return; 
   } 
   temp = head; 
   while (temp->link != NULL) 
    {  temp = temp->link;  } 
    
   temp->link = t; 
   t->data    = x; 
   t->link   = NULL; 
}
node insert_at_begin(int d,node head)
{
    node ptr=(node)malloc(sizeof(node));
    ptr->data=d;
    ptr->link=head;
    head=ptr;
    return head;
}
int main(){
    node head=NULL;
    node ptr=malloc(sizeof(node));
    ptr->data=345;
    ptr->link=NULL;
    head=ptr;
    int d=5525;
   
    printf("Insertion at the end:\n");
    insert_at_end(d,head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\nInsertion at the begining:\n");
    
    d=563;
   head= insert_at_begin(d,head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    ptr=head;
    printf("\nInsetion at end:\n");
    insert_at_end(20,head);
     while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    
    return 0;
}