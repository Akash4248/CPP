#include<iostream>
using namespace std;
int main(){
    int t;
    long int a[3];
    cin>>t;
    for(int i=0;i<t;i++)
{   for(int j=0;j<3;j++)
    cin>>a[j];
    int g=a[0];
    for(int j=0;j<3;j++)
    if(g<a[j])
    g=a[j];
    
    int count=0;
    for(int j=0;j<3;j++)
    if(a[j]==g)
    count++;
    for(int j=0;j<3;j++)
    {
        if(a[j]==g )
        {
            if(g==0)
            cout<<g+1<<endl;
            else if(count!=1)
            cout<<a[j]-g+1<<endl;
            else
            cout<<a[j]-g<<endl;
        }
        else 
        cout<<g-a[j]+1<<endl;
    }
    
}
return 0;
}