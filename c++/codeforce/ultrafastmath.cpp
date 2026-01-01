#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1,s;
    cin>>s>>s1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[i])
        cout<<0;
        else
        cout<<1;
    }
   cout<<endl;
}