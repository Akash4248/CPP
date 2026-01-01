#include<iostream>
using namespace std;
int check(int k,int a[])
{
    int s=a[1],count=0;
    for(int i=1;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(a[i]+a[j]==s)
            count++;

        }
        s=a[i];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=1;
        for(int i=0;i<n;i++)
        {
           count+= check(i,a);
        }
        cout<<count<<endl;
    }
}