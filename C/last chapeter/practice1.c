#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list * link;
};
typedef struct list* node;
node head=NULL;
node create (node head,int i)
{
    printf("Enter the data of %d node: ",i);
    int d;
    scanf("%d",&d);
    
   if(head==NULL)
   {
    head=(node)malloc(sizeof(node));
    head->data=d;
    head->link=NULL;
    return head;

   }
   node t=(node)malloc(sizeof(node));
    t->data=d;
    t->link=head;
    head=t;
    return head;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    // head=(node)malloc(sizeof(node));
    // head->link=NULL;
    for(int i=1;i<=n;i++)
    head= create(head,i);

    node ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    // printf("%d",ptr->data);
    return 0;

}