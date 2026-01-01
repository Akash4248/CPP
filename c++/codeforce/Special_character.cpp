#include<iostream>
using namespace std;
int main(){
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==1){
            cout<<"NO"<<endl;
        }
        else{
            q=((n/2)+64)+1;
            cout<<"YES"<<endl;
                 for (int i = 65; i <q; i++) {
                cout << (char)i << (char)i;
            }
          
    cout<<endl;
        }
    }
    return 0;
}