#include<iostream>
using namespace std;
int main(){
    int t;
    int n,s,i;
    cin>>t;
    for(int j=0;j<t;j++)
{
    cin>>n;
    s=n;
   for( i=1;i<=10;i++)
   {
    s--;
    n++;
    if(n%3==0 || s%3==0)
    {
    cout<<"First"<<endl;
    s=1;
    break;
    }

   }
   if(s==1 && i==10)
   cout<<"Second"<<endl;

}
}