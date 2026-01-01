#include<stdio.h>
#include<stdlib.h>
struct  node
{
   char val;
   struct node *left;
   struct node *right;
};
typedef struct node *Node ;
struct stack{
    int top;
    Node data[20];
};
typedef struct stack Stack;
void push(Stack *s,int item)
{   
    s->data[++(s->top)]->val=item;
}
int pop(Stack *s)
{   
    return s->data[(s->top)--]->val;
}
int preceed(char s)
{
    switch (s)
    {
    case '*':
    case '/': return 3;
    case '+':
    case '-': return 1;
    case '^': return 5;
    default:
        break;
    }
    return 0;
}
Node create(char item)
{
    Node temp=(Node) malloc(sizeof(struct node));
    temp->val=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node* constructTree(char infix[20],Node root)
{
    Stack Os,Ts;
    Os.top=-1;
    Ts.top=-1;
    char symbol;
    Node temp,t;
    for(int i=0;infix[i]!='\0';i++)
    {
        symbol=infix[i];
        temp=create(symbol);
        if(isalnum(symbol))
        push(&Ts,temp);
        else{
            if(Os.top==-1)
            push(&Os,temp);
            else{
                while(Os.top!=-1 && preceed(Os.data[Os.top]->val)> preceed(symbol))
                {
                    t=pop(&Os);
                    t->right=pop(&Ts);
                    t->left=pop(&Ts);
                    push(&Ts,t);
                }
                push(&Os,temp);
            }
        }
    }
    while(Os.top!=-1)
    {
        t=pop(&Os);
        t->right=pop(&Ts);
        t->left=pop(&Ts);
        push(&Ts,t);
    }
    return pop(&Ts);
}

void display(Node head)
{
    if(head!=NULL)
    {
        printf("%d",head->val);
        display(head->left);
        display(head->right);
    }
}
int main(){
    char infix[20];
    printf("Enter the infix Expression");
    scanf("%s",infix);
    Node root=NULL;
    root=constructTree(infix,root);
    display(root);
}