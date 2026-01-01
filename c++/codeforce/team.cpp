#include<iostream>
using namespace std;
int main(){
    int n;
    int a[3],c,t;
    for(int i=0;i<n;i++)
    {   c=0;
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]==1)
            c++;
        }
        if(c>=2)
        t++;
    
    }
    cout<<t<<endl;
    return 0;
}//done
