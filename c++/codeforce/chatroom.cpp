#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a="";
    int h,e,l=0,o;
    
    cin>>s;
    int found=0;
    if(s.compare("hlelo")==0)
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='h' &&h!=1)
            {   if(h==1)
            continue;

                a+='h';
                h=1;
            }
            if(s[i]=='e' && e!=1)
            {
                if(e==1)
                continue;
              a+='e';
                e=1;
            }
            if(s[i]=='l' && l!=2)
            {
                if(l==1)
                a+='l';
                else
                a+='l';
                if(l==2)
                continue;
            
                l++;
            }
            if(s[i]=='o' && o!=1)
            {
                if(o==1)
                continue;
               a+='o';
                o=1;
            }
            
        }
       if(a=="hello")
       found=1;
        
        if(h==1 && e==1 && l==2 && o==1 && found==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}