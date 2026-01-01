#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int sum=x + 4*y;
        if(sum>15 && y>2 && x>7)
        cout<<sum/15<<endl;
        else if(sum>15 && x>7)
        cout<<1<<endl;
    }
}