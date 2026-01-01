#include<stdio.h>
#define max 100
#include<ctype.h>
#include<stdlib.h>
struct stack
{
 int a[max];
 int top;
};
typedef struct stack Stack;
void initialize(Stack *s){
    s->top=-1;
}
int isfull(Stack *s)
{
    return s->top==max-1;
}
int isempty(Stack *s){
    return s->top==-1;
}
void push(Stack *s,int value)
{
    if(isfull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }
  
    s->a[++s->top]=value;
    printf("%d is pushed to stack.\n",value);
}
int pop(Stack *s)
{
    if(isempty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    int pop=s->a[s->top--];
    
    printf("popped item is : %d\n",pop);
    return pop;
}
int main(){
    Stack st;
    initialize(&st);

    char s[20];
    printf("Enter the Postfix Expression: ");
    gets(s);
    int answer=0;
    int a,b,i=0,c;
   while(s[i]!='\0')
    {
       
        if(isdigit(s[i]))
        {
            c=s[i]-'0';
            push(&st,c);
           
        }
        else if(s[i]=='*' ||s[i]=='/' ||s[i]=='+' ||s[i]=='-')
        {
            if(isempty(&st)) printf("Error!");
           a=pop(&st);
            if(isempty(&st)) printf("Error!");
           b=pop(&st);  
            switch (s[i])
            {
            case '*':
                answer=a*b;
                push(&st,answer);
                break;
             case '/':
                if(a==0) printf("Divizon by zero");
                answer=b/a;
                push(&st,answer);
                break;
             case '+':
                answer=a+b;
                push(&st,answer);
                break;
             case '-':
                answer=b-a;
                push(&st,answer);
                break;
            
            
            }

        }
        else if(s[i]==' ') continue;
        else
        printf("Invalid Operator");
        i++;
    }

        printf("Answer is : %d",pop(&st));
}
//2 3 1 * + 9 -