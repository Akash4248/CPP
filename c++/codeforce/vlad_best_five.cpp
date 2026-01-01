#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    string s;
    for(int i=0;i<t;i++)
    {   
        a=0;
        b=0;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='A')
            a++;
            else
            b++;
        }
        
        if(a>b)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;

    }
    return 0;
}