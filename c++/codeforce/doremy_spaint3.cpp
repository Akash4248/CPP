#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=a[0];
        int found=false,count=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {  
                 if(found)
            {
                x=a[i];
                found=false;
            }
                if(a[i]+a[j]==x)
                {
                    found=true;
                    count++;
                    continue;
                }
            }
        }
        if(count==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}