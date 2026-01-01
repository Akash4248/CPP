#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void rec(int i,int a[],int n)
{
    if(i>=n)
    return ;
    rec(i+1,a,n);
    cout<<a[i]<<setw(4);  
}
int main()
{
int n;
cout<<"Enter n:";
cin>>n;
int a[n];
int k;
cout<<"Enter arry elements :";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

rec(0,a,n);
}