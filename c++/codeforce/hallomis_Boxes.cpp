#include<iostream>
#include<algorithm>
using namespace std;
int mian(){
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int i=k;
        while(n/i--)
        {
            sort(a,a+k);

        }
        sort(b,b+n);
        if(a==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
}