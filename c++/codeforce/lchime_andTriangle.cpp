#include<iostream>
using namespace std;
int main(){
 long long  t,a,b,c,d,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++)
    {   bool flag=false;
        
        cin>>a>>b>>c>>d;

        x=a,y=b,z=c;
        if(x>=y+z || y>=z+x || z>=x+y)
        flag=false;
        else
        flag=true;
        while(flag==false)
        {
            if(x<b)
            x++;
            if(y<c)
            y++;
            if(z<d)
            z++;

        if(x>=y+z || y>=z+x || z>=x+y)
        flag=false;
        else
        flag=true;
        }
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
        
    }
}