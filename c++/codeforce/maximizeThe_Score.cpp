#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    int n,s=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<2*n;i++)
        cin>>a[i];
        int m;
        if(n!=1)
       { for(int i=0;i<n;i+=2)
        {
           m=min(a[i],a[i+1]);
            s+=m;
        }
        cout<<s<<endl;
       }
       else
       cout<<min(a[0],a[1])<<endl;
    }
}