#include<iostream>
using namespace std;
int main(){
    int n,r,c;
    cin>>n;
    int x=n;
    while (n>0)
    {
        r=n%10;
        if(r==4 || r==7)
        n/=10;
        else
        break;
    }
    // cout<<n<<endl;

    if(n<=0 ||(x%4==0 || x%7==0 ) )
    cout<<"YES"<<endl;
    else if(n<=0 ||(x%47==0  ))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}