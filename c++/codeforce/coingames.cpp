#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    string a;
    for(int j=0;j<t;j++)
    {   int cnt=0;
        cin>>n;
        // for(int i=0;i<n;i++)
        cin>>a;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='U')
            cnt++;
        }
        if(cnt%2==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}