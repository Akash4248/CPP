#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string a;
   getline(cin,a);
    int len=a.length();
    int i=0;
   string sum="";
    while(len--)
    {
        if(a[i]=='-' && a[i+1]=='-')
        {
       sum+='2';
        i+=2;
        }
        else if(a[i]=='-' && a[i+1]=='.')
        {
           sum+='1';
            i+=2;
        }
        else if(a[i]=='.')
        {
           sum+='0';
        i++;
        }

    }
    
    cout<<sum<<endl;
}