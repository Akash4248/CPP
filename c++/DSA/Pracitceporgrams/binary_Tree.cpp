#include<iostream>
using namespace std;
struct Tree{
    int val;
    struct Tree *left;
    struct Tree *right;

};
typedef struct Tree Node;
Node *CreateNode(int data){
    Node *newnode= new Node;
    newnode->val=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node* CreateBinaryTee(){
    int data;
    cout<<"Enter the data of  Node(Enter -1 if )";
    cin>>data;
    if(data==-1)    return NULL;
    Node *newnode=CreateNode(data);
    
    Node *leftnode=CreateBinaryTee();
    newnode->left=leftnode;
    
  Node *rightnode = CreateBinaryTee();
  newnode->right=rightnode;

    return newnode;
}
void display(Node *root){
    if(root->val==-1)
    {
        return;
    }
    cout<<root->val;
    display(root->left);
    display(root->right);

}
int main(){
    Node *root;
    root=CreateBinaryTee();
    display(root);

}