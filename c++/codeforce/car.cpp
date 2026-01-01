#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k,q,n;
    for(int j=0;j<t;j++)
    {
        cin>>n>>k>>q;
        int a[k],b[k];
        for(int i=0;i<k;i++)
        cin>>a[i];
        for(int i=0;i<k;i++)
        cin>>b[i];
        int d[q];
        for(int i=0;i<q;i++)
        cin>>d[i];
        int sum=0;
        int speed[k];
        for(int i=0;i<k;i++)
        {
            if(i<1)
            speed[i]=a[i]/b[i];
            else
            speed[i]=a[i+1]-a[i] / (b[i+1]-b[i]);

        }
        for(int i=0;i<q;i);




    }
}