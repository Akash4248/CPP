#include<iostream>
using namespace std;
int fun(int x){
    int p=1;
    for(int i=0;i<=x-1;i++){
    cout<<p<<" ";
    p+=i;
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    fun(n);
}
