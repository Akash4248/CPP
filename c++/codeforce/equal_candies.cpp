#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,min,sum;
    for(int j=0;j<t;j++)
    {   sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        min=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]<min)
            min=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>min)
            sum+=a[i]-min;
        }
        cout<<sum<<endl;

    }
    return 0;
    
}