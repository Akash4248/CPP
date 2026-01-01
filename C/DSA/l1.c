#include<stdio.h>
#include<stdlib.h>
struct list{
    int val;
    struct list *link;
};
typedef struct list Node;
Node* insertfront(Node* head,int data){
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->val=data;
    if(head==NULL)
    {
        temp->link=temp;
        return temp;
    }
    temp->link=head;
    head=temp;
    return head;

}
void display(Node *tail){
    Node *head=tail;
    if(head->link==tail)
    {
        printf("Empty \n");
        return;
    }
    while (head->link!=tail)
    {
        printf("%d  ",head->val);
        head=head->link;
    }
    

}
int main(){
    Node *head;
    int n,ele;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    while (n--)
    {
       scanf("%d",ele);
       head=insertfront(head,ele);
    }
    
    display(head);

}