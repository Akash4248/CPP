#include<iostream>
using namespace std;
struct node{
    int val;
    struct node *next;
};
typedef struct node Node;

void display(Node *head){
    Node *t=head;
    if(t==NULL)
    {
    cout<<"Empty list";
    return;
    }
   
    while (t!=NULL)
    {
       cout<<t->val<<"  ";
       t=t->next;
    }

}
Node* swapAlternateNodes(Node* head) {
    if (!head || !head->next) return head;

    Node *prev = nullptr, *current = head, *next = head->next;

    head = next; // Update the head to the second node

    while (current && next) {
        current->next = next->next;
        next->next = current;

        if (prev) prev->next = next;

        prev = current;
        current = current->next;
        if (current) next = current->next;
    }

    return head;
}

int main(){
    int n,ele;
    Node *head=nullptr;
    Node *temp=head;

    cout<<"Enter the Number of elements:";
    cin>>n;
    cout<<"Enter the elements to list:";
    while (n--)
    {
      Node *newnode=new Node;
      cin>>ele;
      newnode->val=ele;
      newnode->next=NULL;
      if(head==nullptr){
        head=newnode;
        temp=head;
      }
      else{
        temp->next=newnode;
        temp=newnode;
      }
    }
    cout<<endl<<"Before Swapping Nodes: ";
    display(head);
   cout<<endl<<"After Swapping Nodes: ";
   display(swapAlternateNodes(head));
    
    return 0;
}