#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    string s;
    char temp;
    cin>>t;
    bool found;
    for(int i=0;i<t;i++)
    {   found=false;
    cin>>s;

        for(int j=1;j<s.length();j++)
        {
            if(s[j]!=s[j-1])
            {   
                temp=s[j-1];
                s[j-1]=s[j];
                s[j]=temp;
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}