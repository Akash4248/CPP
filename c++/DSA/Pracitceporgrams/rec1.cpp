#include<iostream>
using namespace std;
void rec(int a)
{
    if(a==0)
    return ;
    cout<<a<<endl;
    rec(a-1);
    

}
int main()
{
int n;
cout<<"Enter n:";
cin>>n;
rec(n);
}