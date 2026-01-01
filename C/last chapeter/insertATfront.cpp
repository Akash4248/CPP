#include<stdio.h>
#include<stdlib.h>
struct list 
{
    int data ;
    struct list * link;

};
typedef struct list * node;

int main()
{  node  head=(node)malloc(sizeof(node));
    head->link=NULL;
    head->data=0;
    printf("Enter the data to be inserted at front: ");
    int d;
    scanf("%d",&d);
    node ptr=(node)malloc(sizeof(node));
    ptr->link=head;
    ptr->data=d;
    head=ptr;
  node p=head;
    while (p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->link;
    }
    
}