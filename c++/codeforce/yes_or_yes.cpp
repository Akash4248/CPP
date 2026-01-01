#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<3;j++)
        if(s[j]>='A' && s[j]<='Z')
        s[j]=s[j]-'A'+'a';
        
        if(s=="yes")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
    return 0;
}