#include<iostream>
using namespace std;
int check(string a,int n)
{
    int f=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A')
        f+=0;
        if(a[i]=='D')
        f+=0;
        if(a[i]=='E')
        f+=0;
        if(a[i]=='B')
        f+=0;
        if(a[i]=='C')
        f+=0;
        if(a[i]=='F')
        f+=0;
        if(a[i]=='G')
        f+=0;
        else
        f+=1;
    }
    cout<<f<<endl;
    int l=a.length();
    return f;
}
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--)
    {   sum=0;
        int n,m,k;
        string a;
        cin>>n>>m;
        cin>>a;
        sum=check(a,n);
    //    sum=check(a,n);
    //    sum=m*sum;
    //     cout<<sum<<endl;
    }
}