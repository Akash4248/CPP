#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool found=false;
    int i=0;
    
    while(s[i]!='\0')
    {
        if(s[i]=='1')
        {
            if(s[i+1]=='4')
        {
            if(s[i+2]=='4')
            {
                found=true;
                if(s[i+3]=='\0') break;
                i+=3;
            }

            found=true;
            if(s[i+2]=='\0') break;
            i+=2;
            
        }
            if(s[i+1]=='\0') break;
            found=true;
            i++;
        }
        else 
        {
            found=false;
            break;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}