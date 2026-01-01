#include<iostream>
 #include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n;

        x=n/2;
        y=x-1;
        z=n-x-y;

        if(x%3==0)
         {
            x++;
            y--;
         }
         
        
        if(y%3==0)
        {
            y--;
            x++;
        }
        if(z%3==0)
        {
            z--;
            x++;
        }

        if(sqrt(n)*sqrt(n)==n)
        {
         cout<<"NO\n";
        }
        else if(x+y+z==n){
         cout<<"YES\n";
         cout<<x<<" "<<y<<" "<<z<<endl;
        }
        
    }
    return 0;
}