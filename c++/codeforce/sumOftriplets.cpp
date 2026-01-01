#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {int n;
    cin>>n;
    int x,y,z;
    x=0;
    y=n/2;
    z=n-1;
    int found=1;
    while(x+y+z==n )
    {   
        if(x+y+z==n &&x<y && z>y)
        found=0;
        else if(x>y && z<y)
        break;
        x++;
        z--;
    }
    if(found==0)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    else
    cout<<"NO"<<endl;

    }
    
}