#include<stdio.h>
#include<stdlib.h>
struct list{
    int data;
    struct list* link;
};
typedef struct list* node;
node head=NULL;
void add(node p,int i)
{
    int d;
    printf("Enter the data of 1 node: ");
    scanf("%d",&d);
    node t,temp;
    t=(node)malloc(sizeof(node));
    if(t==NULL)
    {
        printf("Memory allocation error!");
        return;
    }
    temp=p;
    while(temp->link!=NULL)
    temp=temp->link;
    temp->link=t;
    t->data=d;
    t->link=NULL;
   

}

int main(){

    printf("Enter the value of N: ");
    int n;
    scanf("%d",&n);
    head=(node)malloc(sizeof(node));
    head->link=NULL;
    head->data=5;
    for(int i=0;i<n;i++)
    add(head,i);
    node ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}