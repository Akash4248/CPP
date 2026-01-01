#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *link;

};
typedef struct list * node;
node head;
node front(node p)
{
    int d;
        node t=(node)malloc(sizeof(node));
        printf("Enter the data :");
        scanf("%d",&d);
        t->data=d;
        t->link=p;
        p->link=t;
    
    return p;
}
 void end(node p)
{
    int d;
        node t=(node)malloc(sizeof(node));
        node temp;
        printf("Enter the data :");
        scanf("%d",&d);
        temp=p;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=t;
        t->data=d;
        t->link=NULL;
        // free(temp);
    return;
    
}
node add(node p){
    

    printf("Do you want to add at front(press 1) or end(press 2)? 1/2 :");
    int c;
    scanf("%d",&c);
    if(c==1)
    p=front(p);
    else
    end(p);


    return p;
}
void insert(node);
int main(){
        head=(node)malloc(sizeof(node));
        head->link=NULL;
        head->data=0;
        int c;
        while(1)
        {
        printf("1.Add nodes \n2.Insert at position:\n3.Display\n4.EXIT\nchoose a option  :");
       
        scanf("%d",&c);
        if(c==1)
        {
            head=add(head);
            
        }
        else if(c==2)
        {   if(head==NULL)
            {
                printf("List is empty first add elements to list");
                head=add(head);
            }
            insert(head);
        }
        else if(c==3)
        {
            node ptr=head;
            while (ptr!=NULL)
            {
               printf("%d ",ptr->data);
               ptr=ptr->link;
            }
            
        }
        else
        exit(0);

        }
        return 0;
}       
void insert(node h)
{
    int p,d,i;
    printf("Enter the  position :");
    scanf("%d",&p);
    printf("Enter the data to insert:");
    scanf("%d",&d);
    node ptr,t;
    t=(node)malloc(sizeof(node));
    ptr=h;
    for(i=2;i<p-1;i++)
    ptr=ptr->link;
    ptr->link=t;
    t->data=d;
    t->link=ptr->link;


}//nnnnnnnnnnnnnnnnnooooooooooooooooootttttttttttttttttttttt wwwwwwwwwwwoooooooooooooorrrrrrrrrrrrrrkkkkkkkkkkkkkkiiiiiiiiiiiinnnnnnnnnngggggggggg