#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data;
     struct Node* next;
};
struct Node* createNode(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
int main()
{   struct Node a;

    createNode(90);
    printf("%d\n",a.data);
    printf("%p",a.next);
}