#include<iostream>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++)
    cin>>a[i];
    int c=0;
    for(int i=1;i<4;i++)
    {
        if(a[i-1]==a[i])
        c++;
    }
    cout<<c<<endl;
}