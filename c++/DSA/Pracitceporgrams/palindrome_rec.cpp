#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
string rec(string s,int i)
{
    if(i<0)
    return "";
    // cout<<s;
    // cout<<endl;
    cout<<s[i]<<endl;
    return s[i]+rec(s,i-1);
    
}
int main()
{
string a,b;
cout<<"Enter a string:";
cin>>a;
b=rec(a,a.size()-1);

if(a==b)
cout<<"Palindrome"<<endl;
else
cout<<"Not a palindrome"<<endl;
}