#include<iostream>
using namespace std;
int main(){
    int n,m,a,b,m1,m2=0;
    cin>>n>>m>>a>>b;
    m1=n*a;
    int l;
    if(a>b)
    l=b;
    else
    l=a;
    if (a==b)
    {
        m2=(n/m)*b;
    }
    else
    while (n>0)
    {   if(n>m)
        m2+=b;
        else if(a==1)
        m2+=(n*a);
        else
        m2+=(n*l);
        n=n-m;
    }
   
    if(m1>=m2)
    cout<<m2<<endl;
    else
    cout<<m1<<endl;
    return 0;
    
}