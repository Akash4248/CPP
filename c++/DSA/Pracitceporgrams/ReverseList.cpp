#include<iostream>
using namespace std;
struct node{
    int val;
    struct node *next;
};
typedef struct node Node;
Node* ReverseList(Node *head){
        Node *cur;
        Node *pre=nullptr;
        Node *temp=nullptr;
        cur=head;
        while (cur!=NULL)
        {
            temp=cur;
            cur=cur->next;
            temp->next=pre;
            pre=temp;
        }
        return temp;

}
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
  
    display(head);
    cout<<"\nAfter Reversing:"<<endl;
    display(ReverseList(head));
    return 0;
}