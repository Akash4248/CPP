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
int Middle_Value(Node *head){
    Node* temp=head;
    int count=0;
    while (temp!=nullptr)
    {
      count++;
        temp=temp->next;
    }
    temp=head;
    cout<<"\nNumber of Elements in list:"<<count<<endl;
    
        int i=count/2;
    if(count%2==0) --i;
    while (i--)
    {   
        temp=temp->next;
        
    }
        return temp->val;
    
    
    
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
    cout<<"\nMiddle Value is:"<<Middle_Value(head)<<endl;
    
    return 0;
}