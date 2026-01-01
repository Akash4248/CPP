#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,x,y,sum;
    for(int i=0;i<t;i++)
    {   
        cin>>a>>b>>c>>x>>y;
        sum=a+b+c;
        if(c!=0)
        {
        if(sum>=x+y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        if(a>=x && b>=y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
      
    }
}