#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,t,v1=0,v2=0,v3=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        int high=max({a,b,c});
        if(high!=a)
        v1=high-a+1;
        
        if(high!=b)
        v2=high-a+1;
        if(high!=c)
        v3=high-a+1;

    }
    cout<<v1<<" "<<v2<<" "<<v3<<endl;
}