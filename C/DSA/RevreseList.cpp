#include<iostream>
using namespace std;
struct node{
    int val;
    struct node* next;
};
typedef struct node Node;
Node* insertend(Node* temp,int ele){
        Node *newnode=new Node;
        
             newnode->val=ele;
             newnode->next=nullptr;
        if(temp==nullptr)
        {  
            temp=newnode;
            return temp;
        }else
        {
        
        // newnode->val=ele;
        temp->next=newnode;
        temp=newnode;
        return temp;
        }
}
Node* Reverse(Node *head){
    Node *cur;
    Node *pre;
    Node *nxt;
    
}
int main(){
    Node *head=nullptr;
    Node *ak=head;
    int ele,n;
    cout<<"Enter the No of Elements:";
    cin>>n;
    cout<<"Enter the elements:";
    while(n--){
        cin>>ele;
      ak=insertend(ak,ele);
      if(head==nullptr)
      head=ak;
    //   cout<<(head? 1:0);
    }
    Node *t=head;
    cout<<"Elements are :";
    while(t!=nullptr)
    {
        cout<<t->val<<" ";
        t=t->next;
    }
    head=Reverse(head);
}