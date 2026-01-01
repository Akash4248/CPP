#include<iostream>
using namespace std;
#define size 30
int stack[size];
int top=-1;
void push(int ele)
{
    if(top==size-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    stack[++top]=ele;
}
int pop(){
    if(top==-1){
        cout<<"Stack Underflow!"<<endl;
        return -1;
    }
    
    return stack[top--];
}
void display(){
    int p=top;
    if(p==-1)
    {
        cout<<"Stack is empty!"<<endl;
        return;
    }
    while (p!=-1)
    {
        cout<<stack[p]<<endl;
        p--;
    }
    
}
int main(){
    int x=1;
    while (x)
    { 
     cout<<"Enter Your Choices:\n1.Push\n2.Pop\n3.Display \n0.EXIT"<<endl;
    int c;
    cin>>c;
    switch (c)
    {
    case 0:
        x=0;
        break;
    case 1:
        cout<<"Enter the element you want to push: ";
        int ele;
        cin>>ele;
        push(ele);
        cout<<"Pushed Element is:"<<ele<<endl;
        break;
    case 2:
        cout<<"Popped Element is: "<<pop()<<endl;
        break;
    case 3:
        display();
        break;
    default:
      cout<<"Invalid Input!"<<endl;
    }
    }
}