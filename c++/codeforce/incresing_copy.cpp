#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    bool found=false;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<i;j++)
      {
          if(A[i]==A[j])
          {
          found=true;
          break;
      }
    }
      if(found)
      {
        break;
      }
    }
    if(!found || n==1)
    {
      cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
}