#include<iostream>
using namespace std;
int main(){
    int t;
    int x,y,a,b,f;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>a>>b;
        if(x==a && y==b )
        f=0;
        if(a>=x && y==b)
        f=0;
        else if(x==a && y>=b)
        f=0;
        if(y==b && x==a-1)
        f=1;
       else  if(x==a && y==b-1)
        f=1;
        else 
        f=1;

        if(f==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}