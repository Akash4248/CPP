#include<iostream>
using namespace std;
struct node{
    int val;
    struct node *next;
};
typedef struct node Node;
Node* EvenList(Node *head){
    Node* temp=head;
    Node* Even=nullptr,*temp2;
    while (temp!=NULL){
        Node* newnode=new Node;
        if(temp->val%2==0)
        {
            newnode->val=temp->val;
              newnode->next=nullptr;
            if(Even==nullptr)
            {
            Even=newnode;
            temp2=newnode;
            }
            else{
                temp2->next=newnode;
                temp2=newnode;
            }
        }
        temp=temp->next;
    }
   return Even;
    
}
Node* OddList(Node *head){
    Node* temp=head;
    Node* Even=nullptr,*temp2;
    while (temp!=NULL){
        Node* newnode=new Node;
        if(temp->val%2!=0)
        {
            newnode->val=temp->val;
            newnode->next=nullptr;
            if(Even==nullptr)
            {
            Even=newnode;
            temp2=newnode;
            }
            else{
                temp2->next=newnode;
                temp2=newnode;
            }
        }
        temp=temp->next;
    }
   return Even;
    
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
    cout<<"\nEven List:"<<endl;
    display(EvenList(head));
    cout<<"\nOdd List:"<<endl;
    display(OddList(head));
    return 0;
}
