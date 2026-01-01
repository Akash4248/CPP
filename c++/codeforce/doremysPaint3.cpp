#include<iostream>
#include<stdlib.h>
using namespace std;
int check(int x,int a[],int n)
{
    int k=0;
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        if(a[i]+a[j]==x)
        {
            continue;
            k++;
        }
        
    }
    if(k>0)
    return 1;
    else
    return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        for(int i=0;i<=n-2;i++)
        {
            if(check(a[i],a,n))
            count++;
            else
            {
                break;
                count=0;
            }

            
        }
        if(count!=0 || n==2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}