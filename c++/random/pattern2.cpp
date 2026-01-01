#include<iostream>
using namespace std;
int main()
{

cout<<"HELLO WORLd"<<endl;
int n,i=1;
cin>>n;



   while (i<=n)
   {
    int j=1;
    int s=1;
    while (s<=n-i+1)
    {
      cout<<s;
      s++;
    }
    
    while (j<=i-1)
    {
      cout<<"*";
      
      j++;
    }
     j=1;
    while (j<=i-1)
    {
      cout<<"*";
      
      j++;
    }
     s=1;
    while (s<=n-i+1)
    {
      cout<<s;
      s++;
    }
    
    
    i++;
    cout<<endl;

   }
   
   
 return 0;


    }


   
