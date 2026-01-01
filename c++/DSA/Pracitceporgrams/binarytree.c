#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int val;
    struct Tree *left;
    struct Tree *right;

};
typedef struct Tree Node;
Node *CreateNode(int data){
    Node *newnode=(Node *)malloc(sizeof(Node));
    if(newnode==NULL)
    return NULL;
    newnode->val=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node* CreateBinaryTee(){
    int data;
    printf("Enter the data of node:");
    scanf("%d",&data);
    if(data==-1)    return NULL;
    Node *newnode=CreateNode(data);
    
    //left subtree
    printf("Enter the  lefchild %d node:\n",data);
    newnode->left=CreateBinaryTee();
    //right subtree
    printf("Enter the  rightchild %d node:\n",data);
  newnode->right = CreateBinaryTee();
    return newnode;
}
void display(Node *root){
    if(root==NULL)
    {
        return;
    }
    display(root->left);
   printf(" %d",root->val);
    display(root->right);

}
int main(){
    Node *root;
    root=CreateBinaryTee();
    display(root);

}