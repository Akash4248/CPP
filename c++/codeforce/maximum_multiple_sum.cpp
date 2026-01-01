#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,s=0,m=2,ans=2;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=2;j<=n;j++)
        {   s=0;
            for(int k=1;k*j<=n;k++)
                {
                    s+=j*k;  
                }
                if(s>m)
                {
                    m=s;
                    ans=j;
                }

                
        }
        cout<<ans<<endl;
        

    }
    return 0;
}