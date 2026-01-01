#include<iostream>

using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string name,s="ABCDEFGHIJKLMNOPQRSTUVWXYZ",m;
    cin>>name;
    if(n<26)
    cout<<"NO"<<endl;
    else
   {
     for(int i=0;i<n;i++)
    {
        if(name[i]>='a' && name[i]<='z')
        name[i]=name[i]-'a'+'A';
        
    }
    bool found=true;
    for(int i=0;i<26;i++)
    {   
        for(int j=0;j<n;j++)
        {
            if(s[i]==name[j])
            {   count+=1;
                s[i]='1';
                break;
                
            }
            else if(j==n-1)
            {
                cout<<"NO"<<endl;   
                found=false;
                break;
            }
        }
        if(!found)
        break;
    }
    if(found)
    cout<<"YES"<<endl;
    }
    
}//done