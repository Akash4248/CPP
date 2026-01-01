#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int p=0;
    while(n>0)
    {
        if (n>=5)
    {
        n-=5;
        p++;
    }
    else if(n==4)
    {
        n-=4;
        p++;
    }
    else if(n==3)
    {
        n-=3;
        p++;
    }
    else if(n==2)
    {
        n-=2;
        p++;
    }
    else 
    {
        n-=1;
        p++;
    }
    }
    
    cout<<p<<endl;
}