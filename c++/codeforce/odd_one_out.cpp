#include<iostream>
using namespace std;
int main(){
    int t;
    int a,b,c,u;
    cin>>t;
    for(int i=0;i<t;i++)
{
    cin>>a>>b>>c;
   if(a==b)
   cout<<c<<endl;
   else if(a==c)
   cout<<b<<endl;
   else if(b==c)
   cout<<a<<endl;
   


}
return 0;
}