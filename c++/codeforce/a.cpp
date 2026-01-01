#include<iostream>
using namespace std;
int pow(int b,int n)
{
    if(n<=1)
    return 1;
   b* pow(b,n-1);
}

int main(){

    int b,n;
    cin>>b>>n;
  cout<<  pow(b,n);
}