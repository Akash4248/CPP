#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,sum=0;
    int  root;
    int l,m,r;
    for(int j=0;j<t;j++)
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    // root=sqrt(sum); 
   l=1;
   r=sum;
   while (l<=r)
   {
    m=l+(r-l) /2;
    root=m*m;
    if(root==sum)
    break;
    else if(root<sum)
    l=m+1;
    else
    r=m-1;
   }
   if(root==sum)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   
}
}