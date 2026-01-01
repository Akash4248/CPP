#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--)
    {   int sum=0;
        
        int n;
        cin>>n;
        if(n==2)
        sum=1;
       else if(n%2==0 && n%4!=0)
       {
            sum=n/4;
            n=n%4;
            sum+=n/2;

       }
        else if(n%4==0)
        sum=n/4;
        else
        sum=n/2;
        cout<<sum<<endl;

    }
}