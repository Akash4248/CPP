#include<iostream>
using namespace std;
int main(){
    int n,k,t=0;
    cin>>n>>k;
    t=240-k;
    if(t==0)
    cout<<0<<endl;
    else
    {int  i=1,count=0,s=0;
   
        while(n!=0 && t!=0)
        {
            if(t<i*5) break;
         t-=i*5;
          i++;
          count++;
           n--;
           
        }
        cout<<count<<endl;


        
    }
    
}