#include<iostream>
using namespace std;
int main(){
    long long n,a,b,t;
  
    int k=0;
    cin>>t;

    while(t--)
    {
    cin>>n>>a>>b;
long long sum,sum2[n];
    sum=n*a;
    int i=0;
    while(k<=min(n,b))
    {
        
        sum2[i]=(b-k+1)+(n-k)*a;
        k++;
        i++;
    }
    int max=sum2[0];
    for(int j=1;j<n;j++)
    {
       if(sum2[i]<max)
       max=sum2[i];
    }
    if(sum<max)
    cout<<max<<endl;
    else
    cout<<sum<<endl;
    }
}