#include<iostream>
using namespace std;
int main(){
    long long t,n,w,h,c;
    cin>>t;
    while(t--){
        c=0;
        cin>>w>>h>>n;
        while(c<(n+1)){
            if(w%2==0){
                w=w/2;
                c=c+2;
            }
            else if(h%2==0){
                 h=h/2;
                 c=c+2;
            }
            else{
                if(c>0){
                    c=c+0;
                }
                else{
                    c=c+1;
                }
                break;
            }
        }
        if(c>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
      