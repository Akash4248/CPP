#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,n;
    int m=0,m1=0;
    for(int i=0;i<t;i++)
{
    cin>>a>>b>>n;
   while(a<=n && b<=n)
   {
    if(a<b)
    {
       a+=b;
       m1++;
    }
    else 
   {
        b+=a;
        m++;
   }
   
   }
   if(m<m1)
   cout<<m<<endl;
   else
   cout<<m1<<endl;
}
}