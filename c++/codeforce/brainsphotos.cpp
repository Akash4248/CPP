#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    int i,j,k=0;
    for( i=0;i<n;i++)
    {
        for( j=0;j<m;j++)
        {
            if(a[i][j]=='C'  || a[i][j]=='Y'|| a[i][j]=='M')
            {
            
            k++;
            }
            
        }
      
        
    }
    if(k<1)
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;
}