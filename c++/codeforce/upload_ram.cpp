#include<iostream>
using namespace std;
int main(){
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int count;
        int sum=k-1;
        count=k*n;
        count=count-sum;
        
        cout<<count<<endl;
    }
}