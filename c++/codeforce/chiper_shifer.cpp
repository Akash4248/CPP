#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        char x;
        x=a[0];
        int found=false;
        
        for(int i=1;a[i]!='\0';i++)
        {
            if(found)
            {
                x=a[i];
                found=false;
                continue;
            }
            if(a[i]==x)
            {
                cout<<x;
                found=true;
                continue;
            }
            

        }
        cout<<endl;

    }
}