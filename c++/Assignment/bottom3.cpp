#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    for(int i=1;i<11;i++)
    {
        s.push(i);
    }
    cout<<"Elements Before Deletion"<<endl;
    for(int i=s.size();i>0;i--)
    cout<<s.top()<<" ";
    int n;
    cout<<"Enter the index of element to be deleted:";
    cin>>n;
    stack<int>s2;
    int p=s.size();
    if(p<n){
        cout<<"INVALID INDEX"<<endl;
        return 0;

    }
    while(p>n-1)
    {
        s2.push(s.top());
        s.pop();
    }
    cout<<"popped element is :"<<s.top();
    s.pop();
    while (s2.size())
    {
        s.push(s2.top());
        s2.pop();
    }
    cout<<"Elements After Deletion"<<endl;
    for(int i=s.size();i>0;i--)
    cout<<s.top()<<" ";
    

}//Not working