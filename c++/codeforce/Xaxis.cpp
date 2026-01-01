#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    int a, b,c;
    int x=0,f=0,m;
    cin>>t;
    for(int i=0;i<t;i++)
{
    cin>>a>>b>>c;
    m=max(a,b);
    m=max(m,c);
    x=m/2;
    // cout<<x<<endl;
    // f=abs(x-a)+abs(x-b)+abs(x-c);
    while(x<a+b+c)
    {
    f=abs(x-a)+abs(x-b)+abs(x-c);
    if(f==0)
    {
        cout<<f<<endl;
        break;
    }
    else if(f<(a+b+c))
    {
        cout<<f<<endl;
        break;
    }
    else
    {
        x++;
    }
    
    }
   

}
}