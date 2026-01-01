#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x;
    while(t--){
        cin>>x;
        if(x%4==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}