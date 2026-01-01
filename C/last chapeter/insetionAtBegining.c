#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
typedef struct node* node;
node add(node head,int d)
{
    node ptr=(node)malloc(sizeof(node));
    ptr->data=d;
    // ptr->link=NULL;
    ptr->link=head;
    head=ptr;
    return head;
}
node add_end(node head,int d)
{
    node ptr=(node)malloc(sizeof(node));
    node temp;
    temp=head;
    ptr->data=d;
    ptr->link=NULL;

    while(temp!=NULL)
    {
        temp=temp->link;
    }
    temp->link=ptr;
    return head;
   
}
int main(){
   node head=(node )malloc(sizeof(node));
    head->data=453;
    head->link=NULL;

    node ptr1=(node )malloc(sizeof(node));
    ptr1->data=234;
    ptr1->link=NULL;
    head->link=ptr1;


    int d=99;
   head=add(head,d);
      ptr1=head;
    while(ptr1!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->link;
    }
   printf("\n");
   head= add_end(head,d);
    ptr1=head;
 while(ptr1!=NULL)
    {
        printf("%d ",ptr1->data);
        ptr1=ptr1->link;
    }
    return 0;

}