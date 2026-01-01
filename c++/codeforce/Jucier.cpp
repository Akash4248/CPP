#include<iostream>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=a[0],count=0;
    for(int i=1;i<n;i++)
    {    
        if(sum>d)
        count+=1;
        else if(a[i]<b) 
        continue;
        sum+=a[i];
    }
    cout<<count<<endl;
}
