#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node* link;
};
int main(){
    typedef struct node* node;
    
    node   head=(node*)malloc(sizeof(node));

    printf("Enter the data of head part:");
    scanf("%d",&head->data);


    head->link=NULL;
    node current=(node*)malloc(sizeof(node));

    printf("Enter the data of second Node:");
    scanf("%d",&current->data);


    current->link=NULL;
    head->link=current;

    
    printf("Data in head part : %d\n",head->data);
    printf("Data in second node:%d",current->data);
    return 0;

   
}