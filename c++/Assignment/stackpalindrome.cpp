#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string k,p;
  cin>>k;
  p="";
    int i=0;
    while(k[i]!='\0'){
        s.push(k[i]);
        i++;
    }
    while (s.size())
    {
        p+=s.top();
        s.pop();
    }
    cout<<k<<" "<<p<<endl;
    if(k==p){
        cout<<"IT is Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    


}