#include<iostream>
using namespace std;
int main(){
    int t,n,c;
    string s,r,m;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            

        }
        
        //  c=0;
        // for(int i=0;i<n;i++)
        // for(int k=i+1;k<n;k++)
        // {
        //     if(r[i]=s[k])
        //     {
        //         c++;
        //     for(int l=i;l<=n;l++)
        //     r[l]=r[l+1];
        //     }
            
        // }
       for(int i=0;i<n;i++) 
        cout<<r[i];

        
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                if(s[i]==r[i])
                {
                    s[i]=r[n-i-1];
                }
            }
        }
        cout<<s<<endl;

    }
}