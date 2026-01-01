#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int a[n];
        int x,y,l;
        for(int i=0;i<n;i++)
       { 
        cin>>a[i];
    
        }

        l=0;
        x=y=0;
        int m[n/2];
        for(int i=0;i<n;i++)
        {
            if(a[i]==0 && l==0)
            {
                x=i+1;
                l=1;
            }

            if(a[i]==0 && a[i+1]==1 && l==1)
            {
                y=i+1;
            }
            
            

        }
       

    }
}