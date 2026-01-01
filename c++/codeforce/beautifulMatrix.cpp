#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    int x=0,y=0,i,j;

    for( i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            x=i+1;
            y=j+1;

        }
        }
    }

    
    if(x>3 )
    x=x-3;
    else
    x=3-x;

    if(y>3)
    y=y-3;
    else
    y=3-y;
    cout<<x+y<<endl;



}