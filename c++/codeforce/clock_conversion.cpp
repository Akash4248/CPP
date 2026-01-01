#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m1,m2;
    while(t--)
    {
        string time;
        cin>>time;
        string n1="",n2="";
        
        for(int i=0;i<2;i++)
        {
            n1+=time[i];

        }
        for(int i=3;i<5;i++)
        {
            n2+=time[i];
        }
        m1=stoi(n1);
         m2=stoi(n2);
    if(m1<=12 && m2<=59 )
    {
        if( m1==0)
        {
            cout<<"12:"<<n2<<" "<<"AM"<<endl;
        }
        else 
        {
            cout<<n1<<":"<<n2<<" "<<"AM"<<endl;
        }
       
    
    }
    
    else if((m1-12)<10)
    {
        cout<<"0"<<(m1-12)<<":"<<n2<<" "<<"PM"<<endl;
    }
    else
    {
        cout<<(m1-12)<<":"<<n2<<" "<<"PM"<<endl;
    }
    }
}