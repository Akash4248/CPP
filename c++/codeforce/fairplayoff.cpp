#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4],n,s;
        for(int i=0;i<4;i++)
        cin>>a[i];
         if(a[0]>a[1])
         n=a[0];
         else
         n=a[1];
         if(a[2]>a[3])
        s=a[2];
        else
        s=a[3];
        sort(a,a+4,greater<int>());
      
       
        if(n==a[0] )
        {
            if(s==a[1])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(n==a[1])
        {
            if(s==a[0])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
}