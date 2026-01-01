#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;
int main(){
    string s;
    string output;
    cin>>s;
                                                                         
    int l=s.length();

    for(int i=0;i<l;i++)
    s[i]=tolower(s[i]);
   
   
    for(int i=0;i<l;i++)
    {
        if(s[i]!='a'&& s[i]!='i' && s[i]!='e'&& s[i]!='o' && s[i]!='y' && s[i]!='u' )
       {
        output=output+"."+s[i];
       }
    }
   cout<<output;
    return 0;
}//done
