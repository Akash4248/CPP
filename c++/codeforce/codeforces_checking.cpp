#include<iostream>
using namespace std;
int main(){
    int t;
    bool found=false;
    char s;
    string a="codeforces";
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>s;
        for(int i=0;i<10;i++)
        {
        if(a[i]==s)
        {
        cout<<"YES"<<endl;
        found=true;
        break;
        }
        else if(i==9 )
        {
            cout<<"NO"<<endl;
        }
        }

        

    }
    return 0;
}