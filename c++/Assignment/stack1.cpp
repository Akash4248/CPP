#include<iostream>
using namespace std;
#define size 30
struct Stack
{
    int data[30];
    int top;
};
typedef struct Stack stack;
void push(stack& s,int ele){
    if(s.top==size-1){
        cout<<"Stack Overflow!"<<endl;
        return;
    }
    s.top+=1;
    s.data[s.top]=ele;
    // cout<<s.top<<endl;
}
int pop(stack& s){
    if(s.top==-1){
        cout<<"Stack Underflow!"<<endl;
        return -1;
    }
    return s.data[s.top--];
}
void display(stack& s){
    if(s.top==-1){
        cout<<"Stack Underflow!"<<endl;
        return;
    }
    int p=s.top;
    while (p!=-1)
    {
      cout<<s.data[p]<<endl;
      p--;
    }
    
}
int main(){
    stack k;
    k.top=-1;
    int x=1;
    int ele; 
    int c;
    while (x)
    { 
     cout<<"\nEnter Your Choices:\n1.Push\n2.Pop\n3.Display \n0.EXIT"<<endl;
   
    cin>>c;
    switch (c)
    {
    case 0:
        x=0;
        break;
    case 1:
        cout<<"Enter the element you want to push: ";
        
        cin>>ele;
        push(k,ele);
        cout<<"Pushed Element is:"<<ele<<endl<<k.top;
        break;
    case 2:
        cout<<"Popped Element is: "<<pop(k)<<endl;
        break;
    case 3:
        display(k);
        break;
    default:
      cout<<"Invalid Input!"<<endl;
    }
    }
}