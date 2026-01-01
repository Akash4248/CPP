#include<iostream>
#define SIZE 20
using namespace std;
int arr[SIZE];
int top;
void push(int item)
{   
if(top==SIZE-1)
{cout<<"Stack OverFlow";
return;
}
arr[++top]=item;
}
int pop(){
    if(top==-1)
    {
        cout<<"Stack UnderFlow!";
        return -1;
    }
    return arr[top--];
}
void display(){
    for(int i=0;i<=top;i++)
    cout<<arr[i]<<" ";
}
int main(){
    top=-1;
    int n;
    cout<<"Enter Number of Elements:";
    cin>>n;
    int ele;
    while(n--)
    {
        cin>>ele;
        push(ele);
    }
    cout<<"Elements of stack are: ";
    display();
    cout<<endl;
   cout<< "popped element is :"<<pop();
}