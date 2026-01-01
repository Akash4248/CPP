#include<iostream>
using namespace std;
int rec(int n){
    if(n==4)
    {
        return n;
    }
    return 2*rec(n+1);
}
int main(){
    cout<<rec(2);
}