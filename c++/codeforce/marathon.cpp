#include<iostream>
using namespace std;
int main(){
    int t;
    int a[4];
    cin>>t;
    int sum;
    for(int j=0;j<t;j++)
    {
        for(int i=0;i<4;i++)
        cin>>a[i];
        sum=0;
        for(int i=0;i<4;i++)
        {
            if(a[0]<a[i])
            sum++;
        }
        cout<<sum<<endl;
    }
}