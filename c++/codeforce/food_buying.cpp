#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long s,a;
    while(t--){
        cin>>s;
        if(s<10){
            cout<<s<<endl;
        }
        else if(s==10) cout<<s+1<<endl;
        else{

            int n;
            a=s;
            while(s>10)
           {
            n=s/10;
            s=s/10;
            a+=n+1;
           
           }
           cout<<a<<endl;

        }
    }
    return 0;
}