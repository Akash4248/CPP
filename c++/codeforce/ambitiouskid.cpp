#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
 long long   int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int m=a[0],i;
    for( i=0;i<n;i++)
    {
        if(a[i]==0)
        {m=0;
            cout<<m<<endl;
         return 0;
        }
        // if(abs(a[i])<m)
        // m=a[i];
        if(a[i]<0)
        {
        if(-a[i]<m)
        m=a[i];
        }
        else if(a[i]<m)
        m=a[i];
    }
    if(m<0 )
    cout<<-m<<endl;
    else
    cout<<m<<endl;

}