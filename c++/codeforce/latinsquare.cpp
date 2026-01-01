#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        bool found=false;
        string a[3];
        for(int i=0;i<3;i++)
        cin>>a[i];
        int j,pos;
        int c1=0,c2=0,c3=0;
        for(int i=0;i<3;i++)
        {
           for( j=0;j<3;j++)
           {
            if(a[i][j]=='?')
            {
                found=true;
                pos=j;
                break;
            }
           }
           if(found)
           {
            for(j=0;j<3;j++)
            {
                if(a[i][j]=='A' && j!=pos) c1++;
              else  if(a[i][j]=='B'&& j!=pos) c2++;
               else if(a[i][j]=='C'&& j!=pos) c3++;
            }
                break;
           }
    }
    if(c1==0)
    cout<<"A"<<endl;
    else if(c2==0)
    cout<<"B"<<endl;
    else if(c3==0)
    cout<<"C"<<endl;
    }
}
