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
int  Search(Node *root,int key){
    if(root==NULL)
    return -1;
    if(root->val==key)
    return 1;
    return Search(root->left,key) || Search(root->right,key);
}
int CoutLeafNodes(Node *root){
    if(root->left==NULL && root->right==NULL)
    return 1;
    return CoutLeafNodes(root->left)+CoutLeafNodes(root->right);

}
int main(){
    Node *root;
    root=CreateBinaryTee();
    display(root);
    printf("Enter the search Eelment:");
    int key;
    scanf("%d",&key);
    if(Search(root,key)) 
    {
        printf("Value is present in the tree\n");
    }
    else{
        printf("Value is not present\n");
    }
    printf("Total Number of leaf Nodes : %d",CoutLeafNodes(root));
}