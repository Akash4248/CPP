#include<iostream>
using namespace std;
int main(){
     int t,a,b;
     cin>>t;
     string s;
     for(int i=0;i<t;i++)
     {  cin>>s;
        a=(int)s[0]-48;
        b=(int)s[2]-48;
        cout<<a+b<<endl;
     }
}