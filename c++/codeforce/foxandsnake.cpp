#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {   
        for(int  j=0;j<n;j++)
        {
            if(x%2==0 )
            cout<<"#";  
            else if(y==m)
            cout<<"#"; 
            else
            cout<<" ";
            y++;
        }
        cout<<endl;
        x+=2;
        y=0;
    }
}