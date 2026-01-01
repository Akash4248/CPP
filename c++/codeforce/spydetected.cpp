#include<iostream>
using namespace std;
int main(){
    int t;
    int n,index;
    cin>>t;
    for(int j=0;j<t;j++)
    {   
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        index=0;
        if(a[0]==a[1])
        for(int i=1;i<n;i++)
        {
            if(a[i-1]!=a[i])
            {
                index=i;
                break;
            }
        }
        else
        {
            index=a[2];
            if(a[0]==index)
            index=1;
            else
            index=0;
        }
        cout<<index+1<<endl;
    }
}