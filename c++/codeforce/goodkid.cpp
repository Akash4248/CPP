#include<iostream>
using namespace std;
int main(){
    int n,t,m,pos,a[10];
     int p;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        p=1;
        cin>>n;
        
        for(int j=0;j<n;j++)
        cin>>a[j];
        m=a[0];
        for(int j=0;j<n;j++)
        {
            if(a[j]<=m )
            {
                m=a[j];
                pos=j;
                
            }
            
        }
       
        if(m==0)
         a[pos]=a[pos]+1;
        else
        a[pos]+=1;
        
        for(int j=0;j<n;j++)
        {
            p*=a[j];
        }
        cout<<p<<endl;
    }
}
