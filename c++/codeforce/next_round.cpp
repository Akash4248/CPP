#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
   
    {
    count=0;
    int m=a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=m && a[i]>0)
        count++;
    }
    cout<<count<<endl;

    }
   


}