#include<iostream>
using namespace std;
int main(){
    int k,n,w,b=0;
    cin>>k>>n>>w;
    int sum=0;
    
    for(int i=1;i<=w;i++)
    sum+=k*i;
    // cout<<sum<<endl;
    if(n>sum)
    cout<<0<<endl;
    else
    cout<<sum-n<<endl;

}