#include<iostream>
using namespace std;
int check(string ,string );

int main(){
    int t;
    string s;
    string s2="codeforces";
    cin>>t;
    int result;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        result=check(s,s2);
        cout<<result<<endl;

        
    }
    return 0;
}
int check(string s,string s2)
{   int c=0;
    for(int i=0;i<10;i++)
    {
       if( s[i]==s2[i])
        continue;
        else
        c++;
    }
    return c;
}