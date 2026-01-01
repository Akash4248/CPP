#include<stdio.h>
#include<stdlib.h>
struct Stack
{
  int data;
  struct Stack *link;
};
int isempty(struct Stack* top){
  return top==NULL;
}
void push(struct Stack** top,int data){
  struct Stack *Newnode=(struct Stack*)malloc(sizeof(struct Stack));
  if(!Newnode) printf("Node Creation Error!!");
  Newnode->data=data;
  Newnode->link=*top;
  *top=Newnode;
}
int pop(struct Stack** top){
  struct Stack *temp=(struct Stack*)malloc(sizeof(struct Stack));
  temp->data=*top;
  

}

int main(){
  struct Stack *top=NULL;

}