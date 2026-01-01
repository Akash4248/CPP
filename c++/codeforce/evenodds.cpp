#include<iostream>
using namespace std;
int main()
{
 long  long int n,k;
    cin>>n>>k;
long long   int odd,even;
    if(n%2!=0)
    {odd=n/2 +1;
    even=n/2;}
    else
    odd=even=n/2;
    
   if(k<=odd)
   {
    cout<<2*k-1<<endl;
   }
   else
   {if(n!=k)
    cout<<2*(k-odd)<<endl;
    else
    cout<<2*even<<endl;
   }

   


}