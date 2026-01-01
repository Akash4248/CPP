#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int ,int );
int main(){
    int t;
    int x;
    cin>>t;
    
   for(int j=0;j<t;j++)
   {
    cin>>x;
    int max[x];
    for(int i=0;i<x-1;i++)
    max[i]=gcd(x,i+1)+i+1;

    int i,m=max[0],index=0;
    for(i=1;i<x-1;i++)
    {
       if(max[i]>m )
       {
        m=max[i];
        index=i;
       }
    }

    cout<<index+1<<endl;
    
    }
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        return gcd(a-b,b);
        else
        return gcd(a,b-a);
    }
    return a;
}