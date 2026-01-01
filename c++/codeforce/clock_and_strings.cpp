#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c,d;
    for(int i=0;i<t;i++)
    {
    cin>>a>>b>>c>>d;
    if(c<=b )
    if(c>=a)
    cout<<"yes"<<endl;
    else if(d<=b )
    if(d>=a)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
    return 0;
}