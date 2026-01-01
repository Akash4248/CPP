#include<iostream>
using namespace std;
struct linkedlist
{
  char val;
  struct linkedlist *link;
};
typedef struct linkedlist Node;

Node* insertFront(Node *head,char data){
    Node *temp=new Node;
    
    if(head==nullptr){
        head=temp;
        temp->val=data;
        temp->link=nullptr;
        return head;
    }
    temp->val=data;
    temp->link=head;
    head=temp;
    return head;
}
int main(){

    Node *head=nullptr;

    int  n;
    cout<<"Enter N:";
    cin>>n;
    char ele;
    cout<<"Enter the elements:";
    while (n--)
    {
       cin>>ele;
  head=  insertFront(head,ele);
    }
    Node *temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->val<<"\t";
        temp=temp->link;
    }
    
    return 0;

}