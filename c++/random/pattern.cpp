#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter no of rows:"<<endl;
    cin>>r;
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=r-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
          
                cout<<"*";
          
          
        }
        
        for(int j=0;j<=i;j++)
        {
            
            
                cout<<"*";
          
        }
        cout<<"\n";
    }

    
}