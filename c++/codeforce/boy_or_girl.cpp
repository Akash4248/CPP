#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l,c=0;
   l=s.length();
  bool found;
    for(int i=0;i<l;i++)
    {  
         found=false;
        for(int j=1;j<i;j++)
        {
            if(s[i]==s[j])
            found=true;
            break;
        }
        if(!found)
        c+=1;
    }
   
    if(c%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}

