#include<iostream>
using namespace std;
int main(){
    int t;
    int a,b,c,m2,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        m=a>b? a:b;
        m=m>c? m:c;
        m2=a<b? a:b;
        m2=m2<c? m2:c;
        // cout<<m<<endl<<m2<<endl;
        if(a>m2 && a<m)
        cout<<a<<endl;
        else if(b>m2 && b<m)
        cout<<b<<endl;
        else
        cout<<c<<endl;

    }
    return 0;
}