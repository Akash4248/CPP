#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
      cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=1;i<n;i++)
    {
      if(A[i]==A[i-1])
    {
      
    cout<<"NO";
     break;
    }
    else if(i==n-1 && A[i]!=A[i-1]){
    cout<<"YES";
    break;
    }
    }
    
    if( n==1){
    cout<<"YES";


    }
    }
    return 0;
}