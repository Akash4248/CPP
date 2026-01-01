#include<iostream>

using namespace std;
void rec(int a[],int n)
{
    const int i=n-1;
    if(i<=0)
    return;
    return rec(a,n--);
    cout<<a[i];

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    rec(a,n);

}