#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,a,b,sum,s,sum2;
    for(int j=0;j<t;j++)
    {   sum=0;
    sum2=0;
        cin>>n>>a>>b;
        s=n;
  
        while (n!=0)
        {
           if(2*a>b && n>=2)
           {
            sum+=b;
            n-=2;
           }
           else
           {
            sum+=a;
            n--;
           }
            
            
        }
      
        // cout<<sum2<<endl<<sum<<endl;
       
        sum2=a*s;

        if(sum2>sum)
        cout<<sum<<endl;
        else
        cout<<sum2<<endl;
        
    }
    return 0;
}