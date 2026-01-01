#include<iostream>
using namespace std;
int main(){
    int t,n[6],sum,sum2;
    string s;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        sum=0;
        sum2=0;
        cin>>s;
        for(int i=0;i<6;i++)
       {
        n[i]=s[i]-48;
       }
    //    for(int i=0;i<6;i++)
    //     cout<<n[i]<<" ";
        for(int i=0;i<3;i++)
        sum+=n[i];
        for(int i=3;i<6;i++)
        sum2+=n[i];
        // cout<<sum<<endl<<sum2<<endl;

        if(sum==sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}