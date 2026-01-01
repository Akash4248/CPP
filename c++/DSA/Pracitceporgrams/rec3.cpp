#include<iostream>
using namespace std;
int rec(int n)
{
   
    if(n==0)
    return n;
   
   return n+rec(n-1);
    

}
int main()
{
int n;
cout<<"Enter n:";
cin>>n;
cout<<rec(n);
}