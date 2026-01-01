#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,a,b,min,sum1=0,sum2=0,j;
    for(int i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        sum1=a*n;
        if(n==2)
       { sum2=b;
       goto next;
       }
        while(n%2==0 )
        {
            sum2=sum2+a;
            n-=1;
        }
        sum2=sum2+(n/2)*b;
       next:
       cout<<sum2<<endl;
   
       if( sum2>sum1)
       {
        cout<<sum1<<endl;
       }
       else
       {
        cout<<sum2<<endl;
       }
       
       

    }
}