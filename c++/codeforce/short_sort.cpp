#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    bool found;
    for(int i=0;i<t;i++)
    {   found=false;
        cin>>s;

        if(s=="abc")
        found=true;
        else if(s[0]=='a' && s[1]=='c')
        found=true;
        
        else if(s[0]=='c' && s[2]=='a')
        found=true;
        else if(s[0]=='b' && s[1]=='a')
        found=true;
        if(found)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}